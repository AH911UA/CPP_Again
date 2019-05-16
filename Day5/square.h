#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

class Square : public Rectangle
{
public:
    Square();
    Square(int len);
    Square(const Square &rhs) ;

    virtual ~Square();

    virtual Square *Clone(){ return new Square(*this); }

private:

};

#endif // SQUARE_H
