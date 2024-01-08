Shader "Spina/Heatmap/HeatmapEditorVis"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _ReferenceTex ("Reference", 2D) = "white" {}
        _Lerp ("Lerp", Range(0, 1)) = 0.5
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        LOD 100

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                float4 vertex : SV_POSITION;
            };

            sampler2D _MainTex;
            sampler2D _ReferenceTex;
            float4 _MainTex_ST;
            float _Lerp;

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                // sample the texture
                fixed4 col = tex2D(_ReferenceTex, i.uv);
                fixed4 col2 = tex2D(_MainTex, i.uv);
                return lerp(col, col2, _Lerp);
            }
            ENDCG
        }
    }
}
