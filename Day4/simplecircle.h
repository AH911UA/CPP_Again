#ifndef SIMPLECIRCLE_H
#define SIMPLECIRCLE_H


class SimpleCircle
{
public:
    SimpleCircle();
     SimpleCircle(int);
     SimpleCircle(const SimpleCircle&);
    ~SimpleCircle();

     void operator++() { itsRadius++;  }
     void operator++(int) { ++itsRadius; }

     bool operator==(const SimpleCircle& rth)
     {
         return rth.itsRadius == this->itsRadius ? true : false;
     }

    SimpleCircle& operator=(const SimpleCircle& rht)
    {
        if(*this == rht)
            return *this;

        this->itsRadius = rht.itsRadius;
        return *this;
    }

private:
    int* itsRadius;
};

#endif // SIMPLECIRCLE_H
