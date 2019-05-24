#include <iostream>
#include "human.h"


int main()
{
    try
    {
        std::string tmpName;
        std::cout << " Enter the name : ";
        std::getline(std::cin, tmpName);

        Human *man = new Human(14, tmpName);
    }
    catch(std::bad_alloc)
    {
        std::cout << std::endl << "sorry, memory is full" << std::endl;
        std::getchar();
    }
    catch(...)
    {
        std::cout << std::endl << "ERROR" << std::endl;
        std::getchar();
    }




    return 0;
}
