#include <iostream>

int * tTwo();

int main()
{
    // 1
    int num = 10;
    int *pNum = &num;
    std::cout << *pNum << std::endl;
    *pNum = 15;

    int &rNum = num;
    std::cout << rNum << std::endl;

    rNum = 20;
    std::cout << rNum << std::endl;

    // 2

    int varOne = 30;
    int *pVarOne = &varOne;

    int *tmp = tTwo();

    delete tmp;
    return 0;
}

int * tTwo()
{
    int *tmp = new int (10);
    std::cout << *tmp << std::endl;
    return tmp;

}
