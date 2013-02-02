#ifndef VERTEXBUFFERGL3X_H
#define VERTEXBUFFERGL3X_H

///
/// \file VertexBufferGL3x.h
///
/// \author Tracy Brown
/// \date 1/28/12
/// \since 1.0
///

#include "VertexBuffer.h"

#include "BufferHint.h"
#include "BufferGL3x.h"

///
/// \class VertexBufferGL3x VertexBufferGL3x.h GL3x/Buffers/VertexBufferGL3x.h
///
/// \brief Holds buffer data
///
/// \author Tracy Brown
/// \date 1/28/12
/// \since 1.0
///
template <typename T>
class VertexBufferGL3x : public VertexBuffer<T>
{
public:
    VertexBufferGL3x(BufferHint hint, int sizeInBytes);
    ~VertexBufferGL3x(void);

    void CopyFromSystemMemory(const T* bufferInSystemMemory, int destinationOffsetInBytes, int lengthInBytes);

    T* CopyToSystemMemory(int offsetInBytes, int sizeInBytes);

    int SizeInBytes();
    BufferHint UsageHint();

private:
    BufferGL3x mBufferObject;
};

#endif // VERTEXBUFFERGL3X_H