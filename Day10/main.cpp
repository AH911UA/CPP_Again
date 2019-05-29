#include <string>
#include "arrays.h"
#define  Multiplication(x, y) ((x)*(y))

template <typename T1, typename T2>
int MultiplicationFunc(T1 t1, T2 t2)
{
    return t1 * t2;
}

template <typename T>
void SwapNew(T &x, T &y)
{
    T a = x;
    x = y;
    y = a;
}

int main()
{
    int x = 10;
    int y = 20;
    std::cout << "\n_____________________\n";

    std::cout << "Define : " << Multiplication(x, y) << std::endl;
    std::cout << "Func : " << MultiplicationFunc(x, y) << std::endl;

    std::cout << "\n_____________________\n";

    std::cout << "Swap \t old x : " << x << "\t old y : " << y << std::endl;
    SwapNew(x, y);
    std::cout << "New x : " << x << "\t New y : " << y << std::endl;


    std::cout << "\n_____________________\n";

    std::string name = "Aleks";
    ArrayS<char> arr(6);
    for (int i = 0; i < name.size(); i ++)
        arr[i] = name.at(i);

    for (int i = 0; i < arr.GetSize() ; i++)
        std::cout << arr[i] << " ";

    std::cout << "\n_____________________\n";
    return 0;
}
