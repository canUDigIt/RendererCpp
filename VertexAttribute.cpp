#include "VertexAttribute.h"

#include "Eigen/Core"

/////////////////////////////////////////////////////////////

VertexAttributeBase::VertexAttributeBase(const std::string& name, VertexAttributeBase::VertexAttributeType type)
    : mName( name )
    , mType( type )
{
}

/////////////////////////////////////////////////////////////

VertexAttributeBase::~VertexAttributeBase()
{
}

/////////////////////////////////////////////////////////////

std::string VertexAttributeBase::Name()
{
    return mName;
}

/////////////////////////////////////////////////////////////

void VertexAttributeBase::SetName( const std::string& name )
{
    mName = name;
}

/////////////////////////////////////////////////////////////

VertexAttributeBase::VertexAttributeType VertexAttributeBase::DataType()
{
    return mType;
}

/////////////////////////////////////////////////////////////

template <typename T>
VertexAttribute<T>::VertexAttribute<T>(const std::string& name, VertexAttributeType type, int capacity)
    :VertexAttributeBase(name, type)
{
    if ( capacity != 0 )
    {
        mValues = std::vector<T>(capacity);
    }
}

/////////////////////////////////////////////////////////////

template <typename T>
VertexAttribute<T>::~VertexAttribute<T>()
{
}

/////////////////////////////////////////////////////////////

template <typename T>
std::vector<T>& VertexAttribute<T>::Values()
{
    return mValues;
}

/////////////////////////////////////////////////////////////

/* Explicit instantiation - I don't want the user to use any 
   values but these for types */

template class VertexAttribute<unsigned char>;
template class VertexAttribute<float>;
template class VertexAttribute<Eigen::Vector2f>;
template class VertexAttribute<Eigen::Vector3f>;
template class VertexAttribute<Eigen::Vector4f>;
template class VertexAttribute<Eigen::Vector3d>;