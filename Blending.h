#ifndef BLENDING_H
#define BLENDING_H

#include "Eigen/Core"

enum SourceBlendingFactor
{
    SBF_Zero,
    SBF_One,
    SBF_SourceAlpha,
    SBF_OneMinusSourceAlpha,
    SBF_DestinationAlpha,
    SBF_OneMinusDestinationAlpha,
    SBF_DestinationColor,
    SBF_OneMinusDestinationColor,
    SBF_SourceAlphaSaturate,
    SBF_ConstantColor,
    SBF_OneMinusConstantColor,
    SBF_ConstantAlpha,
    SBF_OneMinusConstantAlpha
};

enum DestinationBlendingFactor
{
    DBF_Zero,
    DBF_One,
    DBF_SourceColor,
    DBF_OneMinusSourceColor,
    DBF_SourceAlpha,
    DBF_OneMinusSourceAlpha,
    DBF_DestinationAlpha,
    DBF_OneMinusDestinationAlpha,
    DBF_DestinationColor,
    DBF_OneMinusDestinationColor,
    DBF_ConstantColor,
    DBF_OneMinusConstantColor,
    DBF_ConstantAlpha,
    DBF_OneMinusConstantAlpha
};

enum BlendEquation
{
    BE_Add,
    BE_Minimum,
    BE_Maximum,
    BE_Subtract,
    BE_ReverseSubtract
};

struct Blending
{
    Blending()
    {
        Enabled = false;
        SourceRGBFactor = SourceBlendingFactor::SBF_One;
        SourceAlphaFactor = SourceBlendingFactor::SBF_One;
        DestinationRGBFactor = DestinationBlendingFactor::DBF_Zero;
        DestinationAlphaFactor = DestinationBlendingFactor::DBF_Zero;
        RGBEquation = BlendEquation::BE_Add;
        AlphaEquation = BlendEquation::BE_Add;
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