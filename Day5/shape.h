#ifndef SHAPE_H
#define SHAPE_H



class Shape
{
public:
    Shape();
    Shape(const Shape &rhs);

    virtual ~Shape();

    virtual Shape * Clone() { return new Shape(*this); }
};

#endif // SHAPE_H
