#include "Painter.h"

Painter::~Painter()
{
}

bool Painter::DrawCircle(int x, int y, int r)
{
    turtle->pendown();
    return true;
}

int Painter::DrawXandY()
{
    return turtle->getX() + turtle->getY();
}