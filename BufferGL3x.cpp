#include "BufferGL3x.h"

#include"OpenGL.h"
#include "TypeConverterGL3x.h"

#include <stdexcept>

///////////////////////////////////////////////////////

BufferGL3x::BufferGL3x(BufferTarget type, BufferHint usage, int sizeInBytes)
    : mId()
    , mSizeInBytes(sizeInBytes) 
    , mType(type)
    , mUsageHint(usage)
{
    if ( sizeInBytes <= 0 )
    {
        throw std::invalid_argument("sizeInBytes must be greater than zero");
    }
    int glType = TypeConverterGL3x::GLBufferTarget(mType);
    int glUsage = TypeConverterGL3x::GLBufferUsage(mUsageHint);

    if ( glType == 0 )
    {
        throw std::invalid_argument("Invalid buffer target");
    }

    if ( glUsage == 0 )
    {
        throw std::invalid_argument("Invalid buffer hint");
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
    glBindBuffer(TypeConverterGL3x::GLBufferTarget(mType), mId.Value());
}

///////////////////////////////////////////////////////

void BufferGL3x::UnBind()
{
    glBindBuffer(TypeConverterGL3x::GLBufferTarget(mType), 0);
}

///////////////////////////////////////////////////////

template <typename T>
void BufferGL3x::CopyFromSystemMemory(const T* bufferInSystemMemory, int destinationOffsetInBytes, int lengthInBytes)
{
    if ( destinationOffsetInBytes < 0 )
    {
        throw std::invalid_argument("destinationOffsetInBytes must be greater than 0");
    }

    if ( destinationOffsetInBytes + lengthInBytes > mSizeInBytes )
    {
        throw std::out_of_range("destinationOffsetInBytes + lengthInBytes must be less than or equal to mSizeInBytes");
    }

    if ( lengthInBytes < 0 )
    {
        throw std::invalid_argument("lengthInBytes must be greater than or equal to 0");
    }

    glBindVertexArray(0);
    Bind();
    glBufferSubData(TypeConverterGL3x::GLBufferTarget(mType), 
                    destinationOffsetInBytes,
                    lengthInBytes, 
                    bufferInSystemMemory);
}

///////////////////////////////////////////////////////

template <typename T>
T* BufferGL3x::CopyToSystemMemory(int offsetInBytes, int lengthInBytes)
{
    if ( offsetInBytes < 0 ) 
    {
        throw std::invalid_argument("offsetInBytes must be greater than or equal to 0.");
    }

    if ( lengthInBytes <= 0 )
    {
        throw std::invalid_argument("lengthInBytes must be greater than 0");
    }

    if ( offsetInBytes + lengthInBytes > mSizeInBytes )
    {
        throw std::out_of_range("offsetInBytes + lenghInBytes must be less than or equal to mSizeInBytes");
    }

    T bufferInSystemMemory[] = new T[lengthInBytes / sizeof(T)];

    glBindVertexArray(0);
    Bind();
    glGetBufferSubData(TypeConverterGL3x::GLBufferTarget(mType), 
                       offsetInBytes,
                       lengthInBytes,
                       bufferInSystemMemory);

    return bufferInSystemMemory;
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