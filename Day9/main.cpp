#include <iostream>
#include "date.h"
#include "dynintegers.h"


int main()
{
    Date *d = new Date (28, 8, 1993);

    int tmpDd = *d;

    std::cout << "From int : " << tmpDd << std::endl;
    std::cout << "From class : " <<  d->GetDay() << std::endl;

    std::cout << "__________________________" << std::endl;

    const size_t arrSize = 2;

    DynIntegers di(arrSize);

    di[0] = 1;
    di[1] = 5;
    std::cout << di[0] << std::endl;
    std::cout << di[1] << std::endl;

    delete  d;

    return 0;
}
