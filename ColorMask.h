#ifndef COLORMASK_H
#define COLORMASK_H

struct ColorMask
{
    ColorMask(bool red, bool green, bool blue, bool alpha)
    {
        Red = red;
        Green = green;
        Blue = blue;
        Alpha = alpha;
    }

    bool operator == ( const ColorMask& rhs )
    {
        return Red == rhs.Red &&
            Green == rhs.Green &&
            Blue == rhs.Blue &&
            Alpha == rhs.Alpha;
    }

    bool Red;
    bool Green;
    bool Blue;
    bool Alpha;
};

#endif // COLORMASK_H