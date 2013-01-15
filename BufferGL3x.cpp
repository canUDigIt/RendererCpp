#include "BufferGL3x.h"

#include <exception>
#include "TypeConverterGL3x.h"

///////////////////////////////////////////////////////

BufferGL3x::BufferGL3x(BufferTarget type, BufferHint usage, int sizeInBytes)
    : mId()
    , mSizeInBytes(sizeInBytes) 
    , mType(type)
    , mUsageHint(usage)
{
    if ( sizeInBytes <= 0 )
    {
        throw std::exception("sizeInBytes must be greater than zero");
    }
    int glType = TypeConverterGL3x::GLBufferTarget(mType);
    int glUsage = TypeConverterGL3x::GLBufferUsage(mUsageHint);

    if ( glType == 0 )
    {
        throw std::exception("Invalid buffer target");
    }

    if ( glUsage == 0 )
    {
        throw std::exception("Invalid buffer hint");
    }

    glBindVertexArray(0);
    Bind();
    glBufferData( glType, mSizeInBytes, 0, glUsage );
}

///////////////////////////////////////////////////////

BufferGL3x::~BufferGL3x()
{
}

///////////////////////////////////////////////////////

void BufferGL3x::Bind()
{
}

///////////////////////////////////////////////////////

template <typename T>
void BufferGL3x::CopyFromSystemMemory(T* bufferInSystemMemory, int destinationOffsetInBytes, int lengthInBytes)
{
}

///////////////////////////////////////////////////////

template <typename T>
T* BufferGL3x::CopyToSystemMemory(int offsetInBytes, int lengthInBytes)
{
}

///////////////////////////////////////////////////////

BufferIdGL3x BufferGL3x::Id()
{
    return mId;
}

///////////////////////////////////////////////////////

int BufferGL3x::SizeInBytes()
{
    return mSizeInBytes;
}

///////////////////////////////////////////////////////

BufferHint BufferGL3x::UsageHint()
{
    return mUsageHint;
}