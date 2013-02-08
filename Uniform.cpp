#include "Uniform.h"

UniformBase::UniformBase( const std::string& name, UniformType type )
    : m_Name( name )
    , m_Type( type )
{
}

UniformBase::~UniformBase()
{
}

std::string UniformBase::Name() const
{
    return m_Name;
}

UniformType UniformBase::DataType() const
{
    return m_Type;
}

template <typename T>
Uniform<T>::Uniform( const std::string& name, UniformType type )
    : UniformBase( name, type )
{
}