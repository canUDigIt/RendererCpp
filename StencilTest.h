#ifndef STENCILTEST_H
#define STENCILTEST_H

#include "StencilTestFace.h"

struct StencilTest
{
    StencilTest()
    {
        Enabled = false;
        FrontFace = StencilTestFace();
        BackFace = StencilTestFace();
    }

    bool Enabled;
    StencilTestFace FrontFace;
    StencilTestFace BackFace;
};

#endif // !STENCILTEST_H
