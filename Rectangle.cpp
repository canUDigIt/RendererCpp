#include "Rectangle.h"

/////////////////////////////////////////////////////////

Rectangle::Rectangle(const Eigen::Vector2f& topLeft, const Eigen::Vector2f& bottomRight)
    : m_TopLeft(topLeft)
    , m_BottomRight(bottomRight)
{
}

/////////////////////////////////////////////////////////

Rectangle::Rectangle(const Eigen::Vector2f& topLeft, int width, int height)
    : m_TopLeft(topLeft)
    , m_BottomRight(topLeft + Eigen::Vector2f(width, height))
{
}

/////////////////////////////////////////////////////////

Rectangle::~Rectangle()
{
}

/////////////////////////////////////////////////////////

Eigen::Vector2f Rectangle::TopLeft()
{
    return m_TopLeft;
}

/////////////////////////////////////////////////////////

Eigen::Vector2f Rectangle::BottomRight()
{
    return m_BottomRight;
}