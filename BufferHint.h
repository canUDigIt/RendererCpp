#ifndef BUFFERHINT_H
#define BUFFERHINT_H

///
/// \file BufferHint.h
///
/// \author Tracy Brown
/// \date 1/12/13
/// \since 1.0
///
/// \brief Contains the BufferHint enumeration
///
/// Descibes how the buffer is supposed to be used

enum BufferHint
{
    StreamDraw,
    StreamRead,
    StreamCopy,
    StaticDraw,
    StaticRead,
    StaticCopy,
    DynamicDraw,
    DynamicRead,
    DynamicCopy,
};

#endif