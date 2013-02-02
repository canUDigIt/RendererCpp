#include "IndexBufferGL3x.h"

///////////////////////////////////////////////////////

template <typename T>
IndexBufferGL3x<T>::IndexBufferGL3x(BufferHint usage, int sizeInBytes)
    : mBufferObject(BufferTarget::BT_ElementArrayBuffer, usage, sizeInBytes)
{
    if (sizeof(T) == sizeof(unsigned short))
    {
        mDataType = IDT_UnsignedShort;
    }
    else
    {
        mDataType = IDT_UnsignedInt;
    }
}

///////////////////////////////////////////////////////

template <typename T>
IndexBufferGL3x<T>::~IndexBufferGL3x(void)
{
}

///////////////////////////////////////////////////////

template <typename T>
void IndexBufferGL3x<T>::CopyFromSystemMemory(const T* bufferInSystemMemory, int destinationOffsetInBytes, int lengthInBytes)
{
    mBufferObject.CopyFromSystemMemory<T>(bufferInSystemMemory, destinationOffsetInBytes, lengthInBytes);
}

///////////////////////////////////////////////////////

template <typename T>
T* IndexBufferGL3x<T>::CopyToSystemMemory(int offsetInBytes, int sizeInBytes)
{
    return mBufferObject.CopyToSystemMemory<T>(offsetInBytes, sizeInBytes);
}

///////////////////////////////////////////////////////

template <typename T>
int IndexBufferGL3x<T>::SizeInBytes()
{
    return mBufferObject.SizeInBytes();
}

///////////////////////////////////////////////////////

template <typename T>
BufferHint IndexBufferGL3x<T>::UsageHint()
{
    return mBufferObject.UsageHint();
}

///////////////////////////////////////////////////////

template <typename T>
IndexBufferDataType IndexBufferGL3x<T>::DataType()
{
    return mDataType;
}

///////////////////////////////////////////////////////

template <typename T>
int IndexBufferGL3x<T>::Count()
{
    return mCount;
}

///////////////////////////////////////////////////////

template IndexBufferGL3x<unsigned short>;
template IndexBufferGL3x<unsigned int>;