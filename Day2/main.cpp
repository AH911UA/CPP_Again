#include <iostream>


int main()
{
    //Day 8 start
    int num = 50;
    int * pNum = &num;

    std::cout << *pNum << std::endl;

    *pNum = 100;

    std::cout << num << std::endl;
    // Day 8 finish





    getchar();
    return 0;
}
