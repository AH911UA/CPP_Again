#include <iostream>
#include "dog.h"


int main()
{

    Dog d ;

    (++d);

    std::cout << d.GetAge() << std::endl;


    return 0;
}
