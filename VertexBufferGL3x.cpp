#include "VertexBufferGL3x.h"

#include "BufferTarget.h"
///////////////////////////////////////////////////////

template <typename T>
VertexBufferGL3x<T>::VertexBufferGL3x(BufferHint hint, int sizeInBytes)
    : mBufferObject(BufferTarget::ArrayBuffer, hint, sizeInBytes)
{
    
}

///////////////////////////////////////////////////////

template <typename T>
VertexBufferGL3x<T>::~VertexBufferGL3x(void)
{
}

///////////////////////////////////////////////////////

template <typename T>
void VertexBufferGL3x<T>::CopyFromSystemMemory(const T* bufferInSystemMemory, int destinationOffsetInBytes, int lengthInBytes)
{
    mBufferObject.CopyFromSystemMemory<T>(bufferInSystemMemory, destinationOffsetInBytes, lengthInBytes);
}

///////////////////////////////////////////////////////
template <typename T>
T* VertexBufferGL3x<T>::CopyToSystemMemory(int offsetInBytes, int sizeInBytes)
{
    return mBufferObject.CopyToSystemMemory<T>(offsetInBytes, sizeInBytes);
}

///////////////////////////////////////////////////////

template <typename T>
int VertexBufferGL3x<T>::SizeInBytes()
{
    return mBufferObject.SizeInBytes();
}

///////////////////////////////////////////////////////

template <typename T>
BufferHint VertexBufferGL3x<T>::UsageHint()
{
    return mBufferObject.UsageHint();
}