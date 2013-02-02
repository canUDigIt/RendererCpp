#ifndef CLEARBUFFERS_H
#define CLEARBUFFERS_H

enum ClearBuffers
{
    CB_ColorBuffer = 1,
    CB_DepthBuffer = 2,
    CB_StencilBuffer = 4,
    CB_ColorAndDepthBuffer = CB_ColorBuffer | CB_DepthBuffer, 
    CB_All = CB_ColorBuffer | CB_DepthBuffer | CB_StencilBuffer
};

#endif // !CLEARBUFFERS_H
