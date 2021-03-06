#ifndef RENDERSTATE_H
#define RENDERSTATE_H

/// \file RenderState.h
/// 
/// \brief The current render state for a draw call
///
/// \author Tracy Brown
/// \date 2/1/13
/// \since 1.0
///

#include "Blending.h"
#include "ColorMask.h"
#include "DepthRange.h"
#include "DepthTest.h"
#include "FacetCulling.h"
#include "PrimitiveRestart.h"
#include "ScissorTest.h"
#include "StencilTest.h"

enum ProgramPointSize
{
    Enabled,
    Disabled
};

enum RasterizationMode
{
    Point,
    Line,
    Fill
};

struct RenderState
{
    RenderState()
        : ProgramPointSize(ProgramPointSize::Disabled)
        , RasterizationMode(RasterizationMode::Fill)
        , ColorMask(true, true, true, true)
        , DepthRange()
        , Blending()
        , DepthMask(true)
    {
    }

    PrimitiveRestart PrimitiveRestart;
    FacetCulling FacetCulling;
    ProgramPointSize ProgramPointSize;
    RasterizationMode RasterizationMode;
    ScissorTest ScissorTest;
    StencilTest StencilTest;
    DepthTest DepthTest;
    DepthRange DepthRange;
    Blending Blending;
    ColorMask ColorMask;
    bool DepthMask;
};

#endif // RENDERSTATE_H