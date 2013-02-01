#ifndef VERTEXBUFFER_H
#define VERTEXBUFFER_H

#include "BufferHint.h"

template <typename T>
class VertexBuffer
{
public:
    virtual ~VertexBuffer() {};

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
};

#endif