#ifndef DYNINTEGERS_H
#define DYNINTEGERS_H
#include <string>
#include <iostream>

class DynIntegers
{
public:
    DynIntegers() : arr(nullptr){}
    explicit DynIntegers(int s):arr(new int [s]), sizeArray(static_cast<unsigned>(s)) { }

    DynIntegers(DynIntegers&& di):arr(di.arr)
    {
        di.arr = nullptr;
    }

    DynIntegers(const DynIntegers& di)
    {
        if(di.arr != nullptr)
        {
            sizeArray = di.sizeArray;
            arr = new int[sizeArray];
            memcpy(arr, di.arr, sizeArray);
        }
    }

    DynIntegers& operator = (const DynIntegers& di)
    {
        if(&di == this && di.arr == nullptr)
            return *this;

        if(arr != nullptr)
            delete [] arr;

        sizeArray = di.sizeArray;
        arr = new int [sizeArray];
        std::memcpy(arr, di.arr, sizeArray);

        return *this;
    }

    int& operator[](int i)
    {
        std::cout << "operator []" << std::endl;
        if(i >= 0 && i <= sizeArray)
            return arr[i];
    }



        int operator [](int i) const {
            return arr[i];
        }


    operator const int*()
    {
        return arr;
    }


    ~DynIntegers()
    {
        if(arr != nullptr)
            delete [] arr;
    }



private:
    int *arr;
    unsigned sizeArray ;
};

#endif // DYNINTEGERS_H
