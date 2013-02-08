#include "TypeConverterGL3x.h"

#include <iostream>

int TypeConverterGL3x::GLBufferTarget(const BufferTarget& target)
{
    int openGLValue = GL_NONE;

    switch(target)
    {
    case BufferTarget::ArrayBuffer:
        {
            openGLValue = GL_ARRAY_BUFFER;
        }
        break;
    case BufferTarget::ElementArrayBuffer:
        {
            openGLValue = GL_ELEMENT_ARRAY_BUFFER;
        }
        break;
    case BufferTarget::PixelPackBuffer:
        {
            openGLValue = GL_PIXEL_PACK_BUFFER;
        }
        break;
    case BufferTarget::UniformBuffer:
        {
            openGLValue  = GL_UNIFORM_BUFFER;
        }
        break;
    case BufferTarget::TextureBuffer:
        {
            openGLValue = GL_TEXTURE_BUFFER;
        }
        break;
    case BufferTarget::TransformFeedbackBuffer:
        {
            openGLValue = GL_TRANSFORM_FEEDBACK_BUFFER;
        }
        break;
    case BufferTarget::CopyReadBuffer:
        {
            openGLValue = GL_COPY_READ_BUFFER;
        }
        break;
    case BufferTarget::CopyWriteBuffer:
        {
            openGLValue = GL_COPY_WRITE_BUFFER;
        }
        break;
    default:
        {
            std::cout << "Invalid buffer target: " << target << std::endl;
        }
        break;
    };

    return openGLValue;
}

int TypeConverterGL3x::GLBufferUsage(const BufferHint& usage)
{
    int openGLValue = GL_NONE;

    switch(usage)
    {
    case BufferHint::StreamDraw:
        {
            openGLValue = GL_STREAM_DRAW;
        }
        break;
    case BufferHint::StreamRead:
        {
            openGLValue = GL_STREAM_READ;
        }
        break;
    case BufferHint::StreamCopy:
        {
            openGLValue = GL_STREAM_COPY;
        }
        break;
    case BufferHint::StaticDraw:
        {
            openGLValue = GL_STATIC_DRAW;
        }
        break;
    case BufferHint::StaticRead:
        {
            openGLValue = GL_STATIC_READ;
        }
        break;
    case BufferHint::StaticCopy:
        {
            openGLValue = GL_STATIC_COPY;
        }
        break;
    case BufferHint::DynamicDraw:
        {
            openGLValue = GL_DYNAMIC_DRAW;
        }
        break;
    case BufferHint::DynamicRead:
        {
            openGLValue = GL_DYNAMIC_READ;
        }
        break;
    case BufferHint::DynamicCopy:
        {
            openGLValue = GL_DYNAMIC_COPY;
        }
        break;
    default:
        {
            std::cout << "Invalid buffer hint: " << usage << std::endl;
        }
        break;
    };

    return openGLValue;
}