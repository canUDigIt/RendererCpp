#ifndef STENCILTESTFACE_H
#define STENCILTESTFACE_H

enum StencilOperation
{
    Zero,
    Invert,
    Keep,
    Replace,
    Increment,
    Decrement,
    IncrementWrap,
    DecrementWrap
};

enum StencilTestFunction
{
    Never,
    Less,
    Equal,
    LessThanOrEqual,
    Greater,
    NotEqual,
    GreaterThanOrEqual,
    Always
};

struct StencilTestFace
{
    StencilTestFace()
    {
        StencilFailOperation = StencilOperation::Keep;
        DepthFailPassOperation = StencilOperation::Keep;
        DepthPassStencilPassOperation = StencilOperation::Keep;

        Function = StencilTestFunction::Always;
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
