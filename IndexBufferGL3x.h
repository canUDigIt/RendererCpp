#ifndef INDEXBUFFERGL3X_H
#define INDEXBUFFERGL3X_H

#include "IndexBuffer.h"

#include "BufferHint.h"
#include "BufferGL3x.h"

template <typename T>
class IndexBufferGL3x : public IndexBuffer<T>
{
public:
    IndexBufferGL3x(BufferHint usage, int sizeInBytes);
    ~IndexBufferGL3x(void);

    void CopyFromSystemMemory(const T* bufferInSystemMemory, int destinationOffsetInBytes, int lengthInBytes);

    T* CopyToSystemMemory(int offsetInBytes, int sizeInBytes);

    int SizeInBytes();
    BufferHint UsageHint();
    IndexBufferDataType DataType();

    int Count();

private:
    BufferGL3x mBufferObject;
    IndexBufferDataType mDataType;
    int mCount;
};

#endif // INDEXBUFFERGL3X_H