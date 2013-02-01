#ifndef BUFFERIDGL3X_H
#define BUFFERIDGL3X_H

///
/// \file BufferIdGL3x.h
///
/// \author Tracy Brown
/// \date 1/12/13
/// \since 1.0
///
/// \brief Contains the BufferIdGL3x class
///

#include "OpenGL.h"

///
/// \class BufferIdGL3x BufferIdGL3x.h GL3x/Ids/BufferIdGL3x.h
///
/// \brief Generates a buffer id for OpenGL objects
///
/// Don't inherit from this...non virtual destructor
///
class BufferIdGL3x
{
public:

    ///
    /// \brief Generates the buffer id on construction
    ///
    BufferIdGL3x()
    {
        glGenBuffers(1, &mValue);
    }

    ///
    /// \brief Destroys the buffer id on destruction
    ///
    ~BufferIdGL3x()     
    {
        if (mValue != 0)
        {
            glDeleteBuffers(1, &mValue);
        }
    }

    ///
    /// \brief Returns the buffer id
    ///
    /// \return Buffer id
    ///
    unsigned int Value() const { return mValue; }

    bool operator== (const BufferIdGL3x& other) { return mValue == other.Value(); }
    
private:
    unsigned int mValue;
};

#endif // !BUFFERIDGL3X_H
