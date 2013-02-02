#ifndef STENCILTESTFACE_H
#define STENCILTESTFACE_H

enum StencilOperation
{
    SO_Zero,
    SO_Invert,
    SO_Keep,
    SO_Replace,
    SO_Increment,
    SO_Decrement,
    SO_IncrementWrap,
    SO_DecrementWrap
};

enum StencilTestFunction
{
    STF_Never,
    STF_Less,
    STF_Equal,
    STF_LessThanOrEqual,
    STF_Greater,
    STF_NotEqual,
    STF_GreaterThanOrEqual,
    STF_Always
};

struct StencilTestFace
{
    StencilTestFace()
    {
        StencilFailOperation = StencilOperation::SO_Keep;
        DepthFailPassOperation = StencilOperation::SO_Keep;
        DepthPassStencilPassOperation = StencilOperation::SO_Keep;

        Function = StencilTestFunction::STF_Always;
        ReferenceValue = 0;
        Mask = ~0;
    }

    StencilOperation StencilFailOperation;
    StencilOperation DepthFailPassOperation;
    StencilOperation DepthPassStencilPassOperation;

    StencilTestFunction Function;
    int ReferenceValue;
    int Mask;
};

#endif // !STENCILTESTFACE_H
