#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>

class Figure
{
public:
    Figure(){}

    virtual ~Figure(){}

    virtual void Area()  const = 0;
    virtual void Print()  const  = 0;
};

#endif // FIGURE_H
