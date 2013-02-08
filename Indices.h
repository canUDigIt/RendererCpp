#ifndef INDICES_H
#define INDICES_H

#include <vector>
/////////////////////////////////////////////////////////////

class IndicesBase
{
public:
    enum IndicesType
    {
        UnsignedByte,
        UnsignedShort,
        UnsignedInt,

        END_OF_TYPES
    };

    IndicesBase(IndicesType type);
    virtual ~IndicesBase() = 0;

    IndicesType DataType();

private:

    IndicesType mType;
};

/////////////////////////////////////////////////////////////

template <typename T>
class Indices : public IndicesBase
{
public:
    Indices<T>(IndicesBase::IndicesType type, int capacity = 0);
    ~Indices<T>();

    std::vector<T>& Values();

private:

    std::vector<T> mValues;
};

#endif