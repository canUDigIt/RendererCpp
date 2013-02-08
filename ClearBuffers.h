#ifndef CLEARBUFFERS_H
#define CLEARBUFFERS_H

enum ClearBuffers
{
    ColorBuffer = 1,
    DepthBuffer = 2,
    StencilBuffer = 4,
    ColorAndDepthBuffer = ColorBuffer | DepthBuffer, 
    All = ColorBuffer | DepthBuffer | StencilBuffer
};

#endif // !CLEARBUFFERS_H
