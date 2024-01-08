using System;
using UnityEngine;
using UnityEngine.Experimental.Rendering;

#if UNITY_EDITOR
using UnityEditor;
#endif

/// <summary>
/// Visualizes supplied data as a heatmap. Sensor values can be updated at runtime by modifying the "sensors" field.
/// This script does some checking and creation of textures and variables each frame. This is a little inefficient but
/// is done for the sake of ease of use.
/// </summary>
[ExecuteAlways]
public class HeatmapVisualizer : MonoBehaviour
{
    [Serializable]
    public struct Sensor
    {
        /// <summary>
        /// UV coordinate for this sensor.
        /// </summary>
        [Tooltip("UV coordinate for this sensor.")]
        public Vector2 uv;

        /// <summary>
        /// The value read from the sensor.
        /// </summary>
        [Tooltip("The value read from the sensor.")]
        public float value;
    }

#if UNITY_EDITOR
    // This stuff is for editor only and is used for matching up the sensors with the uv coordinates.

    /// <summary>
    /// Reference texture for matching sensors to uv.
    /// </summary>
    [Header("Editor"), Tooltip("Reference texture for matching sensors to uv.")]
    public Texture reference;

    /// <summary>
    /// Transparency of reference texture.
    /// </summary>
    [Tooltip("Transparency of reference texture."), Range(0, 1)]
    public float referenceTransparency;

    /// <summary>
    /// Scale of reference texture.
    /// </summary>
    [Tooltip("Scale of reference texture.")]
    public Vector2 referenceScale = Vector2.one;

    /// <summary>
    /// Position of reference texture.
    /// </summary>
    [Tooltip("Position of reference texture.")]
    public Vector3 referenceOffset = Vector2.zero;

    /// <summary>
    /// Rotation of reference texture.
    /// </summary>
    [Tooltip("Rotation of reference texture.")]
    public Vector3 referenceRotation = Vector3.zero;
#endif

    /// <summary>
    /// Outputted heatmap.
    /// </summary>
#if UNITY_EDITOR
    [Header("Runtime")]
#endif
    [Tooltip("Outputted heatmap.")]
    public RenderTexture texture;

    /// <summary>
    /// Radius for sensor contribution to the heatmap.
    /// </summary>
    [Tooltip("Radius for sensor contribution to the heatmap."), Range(1e-2f, 1)]
    public float sensorRadius = 0.25f;

    /// <summary>
    /// Aspect ratio for sensor contribution to the heatmap.
    /// </summary>
    [Tooltip("Aspect ratio for sensor contribution to the heatmap."), Range(1e-2f, 2)]
    public float sensorAspectRatio = 1f;

    /// <summary>
    /// Output heat map.
    /// </summary>
    [Tooltip("Output heat map."), Range(1e-2f, 10)]
    public float sensorFalloff = 2;
    private float m_prevSensorFalloff = -1;

    /// <summary>
    /// Color ramp for showing values ranged 0 to 1.
    /// </summary>
    [Tooltip("Color ramp for showing values ranged 0 to 1.")]
    public Gradient heatmapColors;

    /// <summary>
    /// Texture representation of "heatmapColors", for easy use of accessing heatmapColors from the GPU.
    /// </summary>
    private Texture2D m_heatmapColorsTexture;

    /// <summary>
    /// List of sensors.
    /// </summary>
    [Tooltip("List of sensors.")]
    public Sensor[] sensors;

    /// <summary>
    /// The raw array of data. Should be equal in length to texture width*height.
    /// </summary>
    private float[] m_data;

    /// <summary>
    /// Caches the pixel array, makes it faster to update the texture.
    /// </summary>
    private Color[] m_pixelData;

    /// <summary>
    /// Internal texture2D used for calculating the raw, black-white textures.
    /// </summary>
    private RenderTexture m_internalTexture;

    /// <summary>
    /// A radial gradient texture used to represent sensors.
    /// </summary>
    private Texture2D m_sensorTexture;

    /// <summary>
    /// An additive material for blending sensor textures together when drawing to m_internalTexture.
    /// </summary>
    private Material m_drawSensorMaterial;

    /// <summary>
    /// A material that converts a black-white texture to a user defined color range.
    /// </summary>
    private Material m_convertColorRangeMaterial;

    ///////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////// Methods /////////////////////////////////////////////
    /// <summary>
    /// Update is called once per frame.
    /// </summary>
    private void Update()
    {
        CalculateHeatmap();
    }

    /// <summary>
    /// Updates the heatmap.
    /// </summary>
    public void CalculateHeatmap()
    {
        // Required or the texture fails on arfoundation.
        if (texture.depth != 0)
        {
            texture.Release();
            texture.depth = 0;
            texture.Create();
        }

        if (texture != null && !texture.IsCreated())
            texture.Create();

        if (texture == null || !texture.IsCreated())
            return;

        //////////////////////////// Sensor Rendering ////////////////////////////
        // Update the sensor radial gradient texture.
        if (m_prevSensorFalloff != sensorFalloff)
        {
            m_prevSensorFalloff = sensorFalloff;
            const int texSize = 32;
            const int halfTexSize = texSize / 2;

            if (m_sensorTexture == null)
            {
                m_sensorTexture = new Texture2D(texSize, texSize);
                m_sensorTexture.wrapMode = TextureWrapMode.Clamp;
            }

            // Calculates the gradient as a linear radial gradient, to the power of sensorFalloff.
            var pixels = new Color32[texSize * texSize];
            var center = Vector2.one * halfTexSize;
            for (int y = 0; y < texSize; ++y)
            {
                for (int x = 0; x < texSize; ++x)
                {
                    var gradient = (new Vector2(x, y) - center).magnitude / halfTexSize;
                    gradient = 1 - Mathf.Clamp01(gradient);
                    gradient = Mathf.Pow(gradient, sensorFalloff);

                    byte colorValue = (byte)(gradient * 255);
                    int index = x + y * texSize;
                    pixels[index] = new Color32(colorValue, colorValue, colorValue, 1);
                }
            }
            m_sensorTexture.SetPixels32(pixels);
            m_sensorTexture.Apply();
        }


        // Set up everything for next step.
        if (m_internalTexture == null || !m_internalTexture.IsCreated() ||
            (texture != null && (m_internalTexture.width != texture.width || m_internalTexture.height != texture.height)))
        {
            if (m_internalTexture != null && m_internalTexture.IsCreated())
                m_internalTexture.Release();
            m_internalTexture = new RenderTexture(texture.width, texture.height, 0);
            m_internalTexture.wrapMode = TextureWrapMode.Clamp;
            m_internalTexture.Create();
        }

        var width = m_internalTexture.width;
        var height = m_internalTexture.height;
        var rectsource = new Rect(0, 0, 1, 1);
        var halfRadius = sensorRadius / 2;
        if (m_drawSensorMaterial == null)
            m_drawSensorMaterial = new Material(Shader.Find("Spina/Heatmap/HeatmapDrawSensor"));

        // Iterate over each sensor and draws sensor as a radial gradient texture.
        // Sensors are written to m_internalTexture.
        RenderTexture active = RenderTexture.active;
        RenderTexture.active = m_internalTexture;

        GL.Clear(false, true, Color.black);
        GL.PushMatrix();
        GL.LoadPixelMatrix(0, width, height, 0);

        var aspect = sensorAspectRatio *  width / Mathf.Max(height, 1);
        for (int i = 0; i < sensors.Length; ++i)
        {
            var uv = sensors[i].uv;
            var rect = new Rect((uv.x - halfRadius) * width, (uv.y - halfRadius * aspect) * height, sensorRadius * width, sensorRadius * height * aspect);
            m_drawSensorMaterial.color = sensors[i].value * Color.white;
            Graphics.DrawTexture(rect, m_sensorTexture, m_drawSensorMaterial, 0);
        }

        GL.PopMatrix();
        RenderTexture.active = active;

        //////////////////////////// Color range conversion ////////////////////////////
        /// Draw the heatmap color range lookup texture.
        if (m_heatmapColorsTexture == null)
        {
            m_heatmapColorsTexture = new Texture2D(16, 1, DefaultFormat.LDR, TextureCreationFlags.None);
            m_heatmapColorsTexture.wrapMode = TextureWrapMode.Clamp;
        }

        var gradientPixels = new Color[m_heatmapColorsTexture.width];
        for (int i = 0; i < gradientPixels.Length; ++i)
            gradientPixels[i] = heatmapColors.Evaluate(1f * i / gradientPixels.Length);
        m_heatmapColorsTexture.SetPixels(gradientPixels);
        m_heatmapColorsTexture.Apply();

        // Convert color range and write changes to output texture.
        if (m_convertColorRangeMaterial == null)
            m_convertColorRangeMaterial = new Material(Shader.Find("Spina/Heatmap/HeatmapConvertRange"));
        m_convertColorRangeMaterial.SetTexture("_ColorRange", m_heatmapColorsTexture);
        Graphics.Blit(m_internalTexture, texture, m_convertColorRangeMaterial);
    }

    /// <summary>
    /// Flips the u coordinate for all sensor uvs. 
    /// Assumes uvs are in inclusive range 0-1.
    /// </summary>
    public void FlipXAxis()
    {
        for (int i = 0; i < sensors.Length; ++i)
        {
            var sensor = sensors[i];
            sensor.uv.Set(1 - sensor.uv.x, sensor.uv.y);
            sensors[i] = sensor;
        }
    }

    /// <summary>
    /// Flips the y coordinate for all sensor uvs.
    /// Assumes uvs are in inclusive range 0-1.
    /// </summary>
    public void FlipYAxis()
    {
        for (int i = 0; i < sensors.Length; ++i)
        {
            var sensor = sensors[i];
            sensor.uv.Set(sensor.uv.x, 1 - sensor.uv.y);
            sensors[i] = sensor;
        }
    }

    /// <summary>
    /// Rotates all sensor uvs counter-clockwise.
    /// Assumes uvs are in inclusive range 0-1.
    /// </summary>
    public void RotateLeft()
    {
        for (int i = 0; i < sensors.Length; ++i)
        {
            var sensor = sensors[i];
            sensor.uv.Set(1 - sensor.uv.y, sensor.uv.x);
            sensors[i] = sensor;
        }
    }

    /// <summary>
    /// Rotates all sensor uvs clockwise.
    /// Assumes uvs are in inclusive range 0-1.
    /// </summary>
    public void RotateRight()
    {
        for (int i = 0; i < sensors.Length; ++i)
        {
            var sensor = sensors[i];
            sensor.uv.Set(sensor.uv.y, 1 - sensor.uv.x);
            sensors[i] = sensor;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///  The code below is editor code for displaying the heatmap in the game scene and for adding buttons to the inspector.
///
#if UNITY_EDITOR

[CustomEditor(typeof(HeatmapVisualizer))]
[CanEditMultipleObjects]
public class HeatmapVisualizerEditor : Editor
{
    /// <summary>
    /// Currently selected sensor index.
    /// </summary>
    private int m_selectedIndex = 0;

    /// <summary>
    /// Material for drawing preview texture in the editor scene.
    /// </summary>
    private Material m_previewMaterial;

    /// <summary>
    /// Custom in-scene UI for when HeatmapVisualizer component is selected.
    /// </summary>
    public void OnSceneGUI()
    {
        var t = target as HeatmapVisualizer;
        var tr = t.transform;
        var pos = tr.position + t.referenceOffset;
        var rot = Quaternion.Euler(t.referenceRotation);

        // Make sure all variables are correctly set up.
        if (m_previewMaterial == null)
            m_previewMaterial = new Material(Shader.Find("Spina/Heatmap/HeatmapEditorVis"));
        if (t.reference != null)
            m_previewMaterial.SetTexture("_ReferenceTex", t.reference);
        if (t.texture != null)
            m_previewMaterial.SetTexture("_MainTex", t.texture);
        m_previewMaterial.SetFloat("_Lerp", t.referenceTransparency);

        // Manually draw textured quad to represent .
        m_previewMaterial.SetPass(0);
        GL.Begin(GL.QUADS);

        GL.TexCoord2(1, 0);
        GL.Vertex(pos + rot * (Vector3.right * t.referenceScale.x));

        GL.TexCoord2(0, 0);
        GL.Vertex(pos);

        GL.TexCoord2(0, 1);
        GL.Vertex(pos + rot * (Vector3.up * t.referenceScale.y));

        GL.TexCoord2(1, 1);
        GL.Vertex(pos + rot * new Vector3(t.referenceScale.x, t.referenceScale.y, 0));
        GL.End();

        // Set font color for next step.
        GUIStyle style = new GUIStyle();
        style.normal.textColor = Color.black;

        // Draw sensors as buttons, that way we can check if any sensor is clicked and update m_selectedIndex.
        float sensorSize = t.sensors.Length == 0 ? 1 : Mathf.Sqrt(0.02f / t.sensors.Length);
        for (int i = 0; i < t.sensors.Length; ++i)
        {
            var sensor = t.sensors[i];
            Handles.color = t.heatmapColors.Evaluate(sensor.value);
            var sensorWorldPos = UVToWorld(sensor.uv);
            if (Handles.Button(sensorWorldPos, tr.rotation, sensorSize, sensorSize, Handles.SphereHandleCap))
            {
                m_selectedIndex = i;
            }

            // Draw index on top of sensor
            Handles.Label(sensorWorldPos + new Vector3(-0.005f, 0.02f, 0), i.ToString(), style);
        }

        // Enables the axis for moving the sensor uv.
        if (m_selectedIndex >= 0 && m_selectedIndex < t.sensors.Length)
        {
            var sensor = t.sensors[m_selectedIndex];
            var sensorPosition = UVToWorld(sensor.uv);
            var sensorNewPosition = Handles.DoPositionHandle(sensorPosition, tr.rotation);

            // Only do more work if position has updated.
            if ((sensorNewPosition - sensorPosition).magnitude > 1e-5f)
            {
                // We have the new location, now convert back to UV.
                sensorNewPosition = Vector3.ProjectOnPlane(sensorNewPosition - pos, rot * tr.forward);
                float u = Vector3.Dot(rot * tr.right, sensorNewPosition) / Mathf.Max(t.referenceScale.x, 1e-2f); ;
                float v = Vector3.Dot(rot * tr.up, sensorNewPosition) / Mathf.Max(t.referenceScale.y, 1e-2f); ;
                sensor.uv = new Vector2(u, 1 - v);

                // Update the sensor.
                t.sensors[m_selectedIndex] = sensor;
                t.CalculateHeatmap();
            }
        }
    }

    /// <summary>
    /// Converts uv coordinates to world space.
    /// </summary>
    /// <param name="uv">uv coordinate</param>
    /// <returns>World space position of the uv uv coordinates.</returns>
    private Vector3 UVToWorld(Vector2 uv)
    {
        var t = target as HeatmapVisualizer;
        var tr = t.transform;
        var pos = tr.position + t.referenceOffset;
        var offset = tr.right * uv.x * t.referenceScale.x + tr.up * (1 - uv.y) * t.referenceScale.y;
        return pos + Quaternion.Euler(t.referenceRotation) * offset;
    }

    /// <summary>
    /// Draws the default inspector followed by buttons for flipping or rotating the uvs.
    /// </summary>
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();

        var t = target as HeatmapVisualizer;
        GUILayout.BeginHorizontal();
        if (GUILayout.Button("Flip X Axis")) TransformAndUpdate(() => t.FlipXAxis());
        if (GUILayout.Button("Flip Y Axis")) TransformAndUpdate(() => t.FlipYAxis());
        GUILayout.EndHorizontal();

        GUILayout.BeginHorizontal();
        if (GUILayout.Button("Rotate Left")) TransformAndUpdate(() => t.RotateLeft());
        if (GUILayout.Button("Rotate Right")) TransformAndUpdate(() => t.RotateRight());
        GUILayout.EndHorizontal();

        serializedObject.Update();
        serializedObject.ApplyModifiedProperties();
    }

    /// <summary>
    /// Helper method to redraw scene after applying transform action.
    /// </summary>
    /// <param name="transformMethod">Transform method.</param>
    private void TransformAndUpdate(Action transformMethod)
    {
        var t = target as HeatmapVisualizer;
        transformMethod.Invoke();
        t.CalculateHeatmap();
        SceneView.lastActiveSceneView.Repaint();
    }
}
#endif