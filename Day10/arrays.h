#ifndef ARRAYS_H
#define ARRAYS_H
#include <iostream>

template <typename T>
class ArrayS
{
public:
    ArrayS(){}
    ArrayS(T s):arrF(new T[s]), sizeA(s){}

    T& operator [] (const int i)
    {
         return this->arrF[i];
    }

//    friend std::ostream& operator << (std::ostream &out, const T &t)
//    {
//        for (int i = 0; i < t.GetSize() ; i++) {
//            out << t.arrF[i];
//        }
//        return out;
//    }

    int GetSize() { return sizeA; }

private:


    T *arrF;
    int sizeA;
};

#endif // ARRAYS_H
