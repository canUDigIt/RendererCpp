#ifndef SCISSORTEST_H
#define SCISSORTEST_H

#include "Rectangle.h"

struct ScissorTest
{
    ScissorTest()
        : Enabled(false)
        , Rectangle(Eigen::Vector2f::Zero(), Eigen::Vector2f::Zero())
    {
    }

    bool Enabled;
    Rectangle Rectangle;
};

#endif // !SCISSORTEST_H
