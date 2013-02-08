#ifndef DEPTHTEST_H
#define DEPTHTEST_H

enum DepthTestFunction
{
    Never,
    Less,
    Equal,
    LessThanOrEqual,
    Greater,
    NotEqual,
    GreaterThanOrEqual,
    Always
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