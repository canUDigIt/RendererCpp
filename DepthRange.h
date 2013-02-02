#ifndef DEPTHRANGE_H
#define DEPTHRANGE_H

struct DepthRange
{
    DepthRange()
    {
        Near = 0.0;
        Far = 1.0;
    }

    double Near;
    double Far;
};

#endif // DEPTHRANGE_H