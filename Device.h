#ifndef DEVICE_H
#define DEVICE_H

#include "VertexBuffer.h"
#include "IndexBuffer.h"

class Device
{
public:
    template <typename T>
    static VertexBuffer<T>* CreateVertexBuffer( BufferHint usage, int sizeInBytes);

    template <typename T>
    static IndexBuffer* CreateIndexBuffer(BufferHint usage, int sizeInBytes);
};

#endif