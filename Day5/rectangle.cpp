#include "rectangle.h"

Rectangle::Rectangle():Shape ()
{

}

Rectangle::Rectangle(int l, int w) : Shape (), length(l), width(w)
{

}

Rectangle::Rectangle(const Rectangle &rhs):Shape (rhs)
{
    this->SetLen(rhs.GetLen());
    this->SetWidth(rhs.GetWidth());
}


