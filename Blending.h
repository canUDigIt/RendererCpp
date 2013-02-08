#ifndef BLENDING_H
#define BLENDING_H

#include "Eigen/Core"

enum SourceBlendingFactor
{
    Zero,
    One,
    SourceAlpha,
    OneMinusSourceAlpha,
    DestinationAlpha,
    OneMinusDestinationAlpha,
    DestinationColor,
    OneMinusDestinationColor,
    SourceAlphaSaturate,
    ConstantColor,
    OneMinusConstantColor,
    ConstantAlpha,
    OneMinusConstantAlpha
};

enum DestinationBlendingFactor
{
    Zero,
    One,
    SourceColor,
    OneMinusSourceColor,
    SourceAlpha,
    OneMinusSourceAlpha,
    DestinationAlpha,
    OneMinusDestinationAlpha,
    DestinationColor,
    OneMinusDestinationColor,
    ConstantColor,
    OneMinusConstantColor,
    ConstantAlpha,
    OneMinusConstantAlpha
};

enum BlendEquation
{
    Add,
    Minimum,
    Maximum,
    Subtract,
    ReverseSubtract
};

struct Blending
{
    Blending()
    {
        Enabled = false;
        SourceRGBFactor = SourceBlendingFactor::One;
        SourceAlphaFactor = SourceBlendingFactor::One;
        DestinationRGBFactor = DestinationBlendingFactor::Zero;
        DestinationAlphaFactor = DestinationBlendingFactor::Zero;
        RGBEquation = BlendEquation::Add;
        AlphaEquation = BlendEquation::Add;
        Color = Eigen::Vector4f::Zero();
    }
    
    bool Enabled;
    SourceBlendingFactor SourceRGBFactor;
    SourceBlendingFactor SourceAlphaFactor;
    DestinationBlendingFactor DestinationRGBFactor;
    DestinationBlendingFactor DestinationAlphaFactor;
    BlendEquation RGBEquation;
    BlendEquation AlphaEquation;
    Eigen::Vector4f Color;
};

#endif // BLENDING_H