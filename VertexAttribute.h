//
//  VertexAttribute.h
//  OpenGL Practice
//
//  Created by Tracy Brown on 12/25/12.
//  Copyright (c) 2012 Tracy Brown. All rights reserved.
//

#ifndef VERTEXATTRIBUTE_H
#define VERTEXATTRIBUTE_H

#include <string>
#include <vector>

/////////////////////////////////////////////////////////////

class VertexAttributeBase
{
public: 

    enum VertexAttributeType
    {
        UnsignedByte,
        Float,
        FloatVector2,
        FloatVector3,
        FloatVector4,
        EmulatedDoubleVector3,

        END_OF_TYPES
    };

    VertexAttributeBase( const std::string& name, VertexAttributeType type );
    virtual ~VertexAttributeBase() = 0;

    std::string Name();
    void SetName( const std::string& name );

    VertexAttributeType DataType();

private:

    std::string mName;
    
    VertexAttributeType mType;
};

/////////////////////////////////////////////////////////////

template <typename T>
class VertexAttribute : public VertexAttributeBase
{
public:
    VertexAttribute<T>(const std::string& name, VertexAttributeType type, int capacity  = 0);
    ~VertexAttribute<T>();

    std::vector<T>& Values();

private:

    std::vector<T> mValues;
};

#endif