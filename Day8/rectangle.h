#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "figure.h"

class Rectangle final : public Figure
{
public:
    Rectangle()
    {
        this->points = new float[3];
    }

    Rectangle(float p1, float p2, float p3):Rectangle()
    {
        points[0] = p1;
        points[1] = p2;
        points[2] = p3;
    }
    ~Rectangle() override
    {
        delete [] points;
    }

    void Area() const override
    {
         std::cout << "Rectangle area" << std::endl;
    }
    void Print() const override
    {
        std::cout << "Rectangle print" << std::endl;
        for (float *i = points; i != points + 3;) {
         std::cout << "Point : " << *i++ << std::endl;
        }
    }

private:
    float *points = nullptr;

};

#endif // RECTANGLE_H
