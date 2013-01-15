#include "TypeConverterGL3x.h"

#include <iostream>

int TypeConverterGL3x::GLBufferTarget(const BufferTarget& target)
{
    int openGLValue = GL_NONE;

    switch(target)
    {
    case BufferTarget::BT_ArrayBuffer:
        {
            openGLValue = GL_ARRAY_BUFFER;
        }
        break;
    case BufferTarget::BT_ElementArrayBuffer:
        {
            openGLValue = GL_ELEMENT_ARRAY_BUFFER;
        }
        break;
    case BufferTarget::BT_PixelPackBuffer:
        {
            openGLValue = GL_PIXEL_PACK_BUFFER;
        }
        break;
    case BufferTarget::BT_UniformBuffer:
        {
            openGLValue  = GL_UNIFORM_BUFFER;
        }
        break;
    case BufferTarget::BT_TextureBuffer:
        {
            openGLValue = GL_TEXTURE_BUFFER;
        }
        break;
    case BufferTarget::BT_TransformFeedbackBuffer:
        {
            openGLValue = GL_TRANSFORM_FEEDBACK_BUFFER;
        }
        break;
    case BufferTarget::BT_CopyReadBuffer:
        {
            openGLValue = GL_COPY_READ_BUFFER;
        }
        break;
    case BufferTarget::BT_CopyWriteBuffer:
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
    case BufferHint::BH_StreamDraw:
        {
            openGLValue = GL_STREAM_DRAW;
        }
        break;
    case BufferHint::BH_StreamRead:
        {
            openGLValue = GL_STREAM_READ;
        }
        break;
    case BufferHint::BH_StreamCopy:
        {
            openGLValue = GL_STREAM_COPY;
        }
        break;
    case BufferHint::BH_StaticDraw:
        {
            openGLValue = GL_STATIC_DRAW;
        }
        break;
    case BufferHint::BH_StaticRead:
        {
            openGLValue = GL_STATIC_READ;
        }
        break;
    case BufferHint::BH_StaticCopy:
        {
            openGLValue = GL_STATIC_COPY;
        }
        break;
    case BufferHint::BH_DynamicDraw:
        {
            openGLValue = GL_DYNAMIC_DRAW;
        }
        break;
    case BufferHint::BH_DynamicRead:
        {
            openGLValue = GL_DYNAMIC_READ;
        }
        break;
    case BufferHint::BH_DynamicCopy:
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