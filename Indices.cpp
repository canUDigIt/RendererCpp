#include "Indices.h"

/////////////////////////////////////////////////////////////

IndicesBase::IndicesBase(IndicesBase::IndicesType type)
    : mType( type )
{

}

/////////////////////////////////////////////////////////////

IndicesBase::~IndicesBase()
{

}

/////////////////////////////////////////////////////////////

IndicesBase::IndicesType IndicesBase::DataType() 
{
    return mType;
}

/////////////////////////////////////////////////////////////

template <typename T>
Indices<T>::Indices<T>(IndicesBase::IndicesType type, int capacity)
    : IndicesBase( type )
{
    if (capacity != 0)
    {
        mValues = std::vector<T>(capacity);
    }
}

/////////////////////////////////////////////////////////////

template <typename T>
Indices<T>::~Indices<T>()
{
}

/////////////////////////////////////////////////////////////

template <typename T>
std::vector<T>& Indices<T>::Values()
{
    return mValues;
}

/////////////////////////////////////////////////////////////

template class Indices<unsigned char>;
template class Indices<unsigned short>;
template class Indices<unsigned int>;