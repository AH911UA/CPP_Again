#ifndef DATE_H
#define DATE_H


class Date
{
public:
    Date():dd(0), mm(0), yyyy(0){}
    Date(int _dd, int _mm, int _yyyy):dd(_dd), mm(_mm), yyyy(_yyyy){}

    operator const int() const
    {
        return dd;
    }

    int GetDay(){ return dd; }

private:
    int dd;
    int mm;
    int yyyy;
};

#endif // DATE_H
