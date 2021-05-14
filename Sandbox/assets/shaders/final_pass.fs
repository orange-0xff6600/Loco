#version 330 core
out vec4 FragColor;

in vec2 TexCoords;

uniform sampler2D screenTexture;

void main()
{ 
    FragColor = texture(screenTexture, TexCoords);
    //float depth = texture(screenTexture, TexCoords).r;
    //FragColor = vec4(vec3(depth), 1.0f);
}