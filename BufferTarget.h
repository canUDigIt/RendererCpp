#ifndef BUFFERTARGET_H
#define BUFFERTARGET_H

///
/// \file BufferTarget.h
///
/// \author Tracy Brown
/// \date 1/12/13
/// \since 1.0
///
/// \brief Contains the BufferTarget enumeration
///
/// Describes what the buffer is supposed to be used for
///

enum BufferTarget
{
    ArrayBuffer,
    ElementArrayBuffer,
    PixelPackBuffer,
    UniformBuffer,
    TextureBuffer,
    TransformFeedbackBuffer,
    CopyReadBuffer,
    CopyWriteBuffer,
};

#endif // !BUFFERTARGET_H
