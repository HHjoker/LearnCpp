#ifndef _PAINTER_H_
#define _PAINTER_H_

#include "turtle.h"

class Painter
{
private:
    Turtle* turtle;

public:
    Painter(Turtle* turtle)
        : turtle(turtle) {}

    bool DrawCircle(int, int, int);

    int DrawXandY();

    ~Painter();
};

#endif