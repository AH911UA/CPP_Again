//#ifndef CIRCLE_H
//#define CIRCLE_H
#include "figure.h"

class Circle final : public Figure
{
public:
    Circle() : radius(0) {}

    Circle(float r): Circle()
    {
        radius = r;
    }

    void Area() const override final
    {
        std::cout << "Circle area" << std::endl;
    }


    void Print() const override final
    {
        std::cout << "Circle print" << std::endl;
    }

private:
    float radius;
};

//#endif // CIRCLE_H
