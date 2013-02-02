#ifndef DEPTHTEST_H
#define DEPTHTEST_H

enum DepthTestFunction
{
    DTF_Never,
    DTF_Less,
    DTF_Equal,
    DTF_LessThanOrEqual,
    DTF_Greater,
    DTF_NotEqual,
    DTF_GreaterThanOrEqual,
    DTF_Always
};

struct DepthTest
{
    DepthTest()
    {
        Enabled = true;
        Function = DepthTestFunction::DTF_Less;
    }

    bool Enabled;
    DepthTestFunction Function;
};

#endif // DEPTHTEST_H