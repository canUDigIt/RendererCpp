#ifndef SHADERPROGRAM_H
#define SHADERPROGRAM_H

#include "Uniform.h"
#include "UniformBlock.h"

#include <string>
#include <list>

class ShaderProgram
{
public:
    ShaderProgram();
    virtual ~ShaderProgram() = 0;

    virtual std::string Log() const = 0;
    virtual FragmentOutputs FragmentOutput( const std::string& name ) const = 0;
    virtual ShaderVertexAttributeCollection VertexAttributes( const std::string& name ) const = 0;
    virtual UniformCollection Uniforms( const std::string& name ) const = 0;
    virtual UniformBlockCollection UniformBlocks( const std::string& name ) = 0;

    void InitializeAutomaticUniforms(UniformCollection uniforms);
    void SetDrawAutomaticUniforms(Context context, DrawState drawstate, SceneState scenestate);

private:
    std::list<DrawAutomaticUniform> m_DrawAutomaticUniforms;
};

#endif // !SHADERPROGRAM_H
