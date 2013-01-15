#ifndef BUFFERGL3X_H
#define BUFFERGL3X_H

///
/// \file BufferGL3x.h
///
/// \author Tracy Brown
/// \date 1/12/13
/// \since 1.0
///
/// \brief Contains the BufferGL3x class
///

#include "BufferHint.h"
#include "BufferTarget.h"
#include "BufferIdGL3x.h"

///
/// \class BufferGL3x BufferGL3x.h GL3x/Buffers/BufferGL3x.h
///
/// \brief OpenGL 3.x buffer
///
/// Don't inherit from this class!!! Destructor isn't virtual
///

class BufferGL3x
{
public:
    ///
    /// \brief Creates an OpenGL 3.x buffer
    ///
    /// \param[in] type The type of buffer to create
    /// \param[in] usage How the buffer will be used
    /// \param[in] sizeInBytes size of the buffer in bytes
    ///
    /// The size of the buffer must be greater than 0 or will throw and exception
    ///
    BufferGL3x(BufferTarget type, BufferHint usage, int sizeInBytes);    

    ///
    /// \brief Destroys this OpenGL 3.x buffer
    /// 
    ~BufferGL3x(); 

    ///
    /// \brief Binds the buffer for use
    ///
    void Bind();

    ///
    /// \brief Copies data from an array in memory to the buffer
    ///
    /// \param[in] bufferInSystemMemory The array in memory containing the data to copy
    /// \param[in] destinationOffsetInBytes The position in the buffer to start the copying of the data
    /// \param[in] lenthInBytes The number of bytes to copy into the buffer
    ///
    template <typename T>
    void CopyFromSystemMemory(T* bufferInSystemMemory, int destinationOffsetInBytes, int lengthInBytes);

    ///
    /// \brief Copies data from the buffer to an array in memory
    ///
    /// \param[in] offsetInBytes Where in this buffer to start 
    /// \param[in] lengthInBytes The number of bytes to copy from the buffer
    ///
    /// \return A pointer to an array containing the data copied
    ///
    template <typename T>
    T* CopyToSystemMemory(int offsetInBytes, int lengthInBytes);

    BufferIdGL3x Id();
    int SizeInBytes();
    BufferHint UsageHint();

private:
    BufferIdGL3x mId;
    int mSizeInBytes;
    BufferTarget mType;
    BufferHint mUsageHint;
};

#endif