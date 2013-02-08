#ifndef INDEXBUFFER_H
#define INDEXBUFFER_H

///
/// \file IndexBuffer.h
/// 
/// \brief The interface for indexBuffers and the enum IndexBufferDataType
///
/// \author Tracy Brown
/// \date 1/29/13
/// \since 1.0
///

#include "BufferHint.h"

///
/// \brief The types of data that an index buffer can contain
///
/// Didn't include byte because it wouldn't make any considerable difference in performance
///
enum IndexBufferDataType
{
    UnsignedInt,
    UnsignedShort
};

///
/// \class IndexBuffer IndexBuffer.h Buffers/IndexBuffer.h
///
/// \brief Interface for index buffers
///
/// \author Tracy Brown
/// \date 1/29/13
/// \since 1.0
///
template <typename T>
class IndexBuffer
{
public:
    virtual ~IndexBuffer() {};

    void CopyFromSystemMemory(const T* bufferInSystemMemory)
    {
        CopyFromSystemMemory(bufferInSystemMemory, 0);
    }

    void CopyFromSystemMemory(const T* bufferInSystemMemory, int destinationOffsetInBytes)
    {
        CopyFromSystemMemory(bufferInSystemMemory, destinationOffsetInBytes, 0);
    }

    virtual void CopyFromSystemMemory(const T* bufferInSystemMemory, int destinationOffsetInBytes, int lengthInBytes) = 0;

    T* CopyToSystemMemory()
    {
        return CopyToSystemMemory(0, SizeInBytes());
    }

    virtual T* CopyToSystemMemory(int offsetInBytes, int sizeInBytes) = 0;

    virtual int SizeInBytes() = 0;
    virtual BufferHint UsageHint() = 0;
    virtual IndexBufferDataType DataType() = 0;
};

#endif