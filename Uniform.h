#ifndef UNIFORM_H
#define UNIFORM_H

#include <string>
#include <map>

#include "UniformType.h"

class UniformBase
{
public:
    UniformBase(const std::string& name, UniformType type);
    virtual ~UniformBase();

    std::string Name() const;
    UniformType DataType() const;

private:
    std::string m_Name;
    UniformType m_Type;
};

template <typename T>
class Uniform : public UniformBase
{
public:
    Uniform( const std::string& name, UniformType type );

    virtual T Value() const = 0;

};

typedef std::map< std::string, UniformBase > UniformCollection;

#endif // !UNIFORM_H
