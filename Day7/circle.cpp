#include "circle.h"

Circle::Circle()
{
    r = 0;
}
Circle::Circle(double r) : r(r) {}


Circle::~Circle(){}


double Circle::GetP() const
{
    return 2 * Pi * r;
}
double Circle::GetS() const
{
    return 2 * Pi * pow(r, 2);
}
