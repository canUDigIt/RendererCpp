#ifndef FACETCULLING_H
#define FACETCULLING_H

#include "WindingOrder.h"

enum CullFace
{
    CF_Front,
    CF_Back,
    CF_FrontAndBack
};

struct FacetCulling
{
    FacetCulling()
    {
        Enabled = true;
        Face = CullFace::CF_Back;
        FrontFaceWindingOrder = WindingOrder::WO_Counterclockwise;
    }

    bool Enabled;
    CullFace Face;
    WindingOrder FrontFaceWindingOrder;
};

#endif // FACETCULLING_H