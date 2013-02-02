#ifndef PRIMITIVERESTART_H
#define PRIMITIVERESTART_H

struct PrimitiveRestart
{
    PrimitiveRestart()
    {
        Enabled = false;
        Index = 0;
    }

    bool Enabled;
    int Index;
};

#endif // !PRIMITIVERESTART_H
