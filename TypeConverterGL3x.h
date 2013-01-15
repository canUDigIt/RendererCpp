#ifndef TYPECONVERTERGL3X_H
#define TYPECONVERTERGL3X_H

#include <Windows.h>
#include <GL/glew.h>

#include "BufferTarget.h"
#include "BufferHint.h"


class TypeConverterGL3x
{
public:

    ///
    /// \brief Converts BufferTargets into OpenGL equivalent
    ///
    /// \return The equivalent OpenGL integer for BufferTarget
    ///
    static int GLBufferTarget(const BufferTarget& target);

    ///
    /// \brief Converts BufferHint to OpenGL equivalent
    ///
    /// \return The equivalent OpenGL integer for BufferHint
    static int GLBufferUsage(const BufferHint& usage);
};

#endif // TYPECONVERTERGL3X_H