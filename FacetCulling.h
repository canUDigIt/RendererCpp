#ifndef FACETCULLING_H
#define FACETCULLING_H

#include "WindingOrder.h"

enum CullFace
{
    Front,
    Back,
    FrontAndBack
};

struct FacetCulling
{
    FacetCulling()
    {
        Enabled = true;
        Face = CullFace::Back;
        FrontFaceWindingOrder = WindingOrder::Counterclockwise;
    }

    bool Enabled;
    CullFace Face;
    WindingOrder FrontFaceWindingOrder;
};

#endif // FACETCULLING_H