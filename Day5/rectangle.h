#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class Rectangle : public Shape
{
public:
    Rectangle();
    Rectangle(int l, int w = 13);
    Rectangle(const Rectangle &rts);

    void SetLen(int l) { length = l; }
    void SetWidth(int w) { width = w; }


    int GetLen() const { return length; }
    int GetWidth() const { return width; }

    Rectangle *Clone() { return new Rectangle(*this); }

protected:

    int length;
    int width;
};

#endif // RECTANGLE_H
