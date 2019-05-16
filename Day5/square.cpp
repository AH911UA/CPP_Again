#include "square.h"

Square::Square() : Rectangle() {}

Square::Square(int len) : Rectangle(len)
{

}

Square::Square(const Square &rhs) : Rectangle(rhs)
{
    this->SetLen(rhs.GetLen());
    this->SetWidth(rhs.GetWidth());
}

Square::~Square(){}
