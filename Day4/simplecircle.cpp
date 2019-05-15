#include "simplecircle.h"

SimpleCircle::SimpleCircle()
{
    itsRadius = new int(0);
}
SimpleCircle::SimpleCircle(int r)
{
    itsRadius = new int(r);
}
SimpleCircle::SimpleCircle(const SimpleCircle &rth)
{
    itsRadius = new int();
    itsRadius = rth.itsRadius;
}
SimpleCircle::~SimpleCircle()
{
    delete itsRadius;
}
