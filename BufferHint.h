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
    BH_StreamDraw,
    BH_StreamRead,
    BH_StreamCopy,
    BH_StaticDraw,
    BH_StaticRead,
    BH_StaticCopy,
    BH_DynamicDraw,
    BH_DynamicRead,
    BH_DynamicCopy,
};

#endif