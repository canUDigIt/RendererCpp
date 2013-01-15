#include "Device.h"

#include "Eigen\Core"

template <typename T>
VertexBuffer<T>* Device::CreateVertexBuffer(BufferHint usage, int sizeInBytes)
{
    return 0;
}

template <typename T>
IndexBuffer* Device::CreateIndexBuffer(BufferHint usage, int sizeInBytes)
{
    return 0;
}

template VertexBuffer<unsigned char>* Device::CreateVertexBuffer<unsigned char>(BufferHint, int);
template VertexBuffer<float>* Device::CreateVertexBuffer<float>(BufferHint, int);
template VertexBuffer<Eigen::Vector2f>* Device::CreateVertexBuffer<Eigen::Vector2f>(BufferHint, int);
template VertexBuffer<Eigen::Vector3f>* Device::CreateVertexBuffer<Eigen::Vector3f>(BufferHint, int);
template VertexBuffer<Eigen::Vector4f>* Device::CreateVertexBuffer<Eigen::Vector4f>(BufferHint, int);
template VertexBuffer<Eigen::Vector3d>* Device::CreateVertexBuffer<Eigen::Vector3d>(BufferHint, int);