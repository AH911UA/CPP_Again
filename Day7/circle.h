#ifndef CIRCLE_H
#define CIRCLE_H
#include <math.h>

class Circle
{
public:
    Circle();
    Circle(double);

    ~Circle();

    double GetP() const;
    double GetS() const;

private:
    double r;
    const double Pi = 3.14;
};

#endif // CIRCLE_H
