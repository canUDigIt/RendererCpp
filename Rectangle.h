#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Eigen/Core"

class Rectangle
{
public:
    Rectangle(const Eigen::Vector2f& topLeft, const Eigen::Vector2f& bottomRight);
    Rectangle(const Eigen::Vector2f& topLeft, int width, int height);
    ~Rectangle();

    Eigen::Vector2f TopLeft();
    Eigen::Vector2f BottomRight();

private:
    Eigen::Vector2f m_TopLeft;
    Eigen::Vector2f m_BottomRight;
};

#endif // !RECTANGLE_H
