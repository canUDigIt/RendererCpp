#ifndef CLEARSTATE_H
#define CLEARSTATE_H

#include "ScissorTest.h"
#include "ColorMask.h"
#include "ClearBuffers.h"

struct ClearState
{
    ClearState()
        : ScissorTest()
        , ColorMask(true, true, true, true)
        , DepthMask(true)
        , FrontStencilMask(~0)
        , BackStencilMask(~0)
        , Buffers(ClearBuffers::All)
        , Color(Eigen::Vector4f(1, 1, 1, 1))
        , Depth(1)
        , Stencil(0)
    {

    }

    ScissorTest ScissorTest;
    ColorMask ColorMask;
    bool DepthMask;
    int FrontStencilMask;
    int BackStencilMask;

    ClearBuffers Buffers;
    Eigen::Vector4f Color;
    float Depth;
    int Stencil;
};

#endif // !CLEARSTATE_H
