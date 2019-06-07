#include <iostream>
#include <list>
#include <vector>
#include <string>

template <typename T>
struct MultStruct
{
    MultStruct():count (0){}

    T operator()(const T& t)
    {
        count++;
        std::cout << t * t << "\t";
        return t*t;
    }

    int count ;
};

template <typename T>
struct SortStruct
{

    bool operator ()(const T& l, const T& r) const
    {
        return (l < r);
    }
};


int main()
{
    int arr[] = {0, 1, 2, 3};
    std::list<int> lInt ;
    for (int i : arr)
        lInt.push_back(i);

    for(auto i : lInt)
        std::cout << i;

    std::list<int>::iterator iter = lInt.begin() ;

    lInt.push_front(99);

    std::cout << "\n Iterator : " << *iter << std::endl;
    std::cout << "Firts elem after push_front() : " << *lInt.begin() << std::endl;

    std::cout << "_______________________\n";

    std::vector<int> vInt = {11, 22, 33, 44};
    lInt.insert(lInt.end(), vInt.begin(), vInt.end());

    std::cout << "Afret insert from vector to list : " << std::endl;
    for(auto i : lInt)
        std::cout << i << "\t";

    std::list<std::string> lStr = {"Hello", "World", "!!!", "Revers"};
    lStr.reverse();
    std::cout << "\n";
    for(auto i : lStr)
        std::cout << i << " ";

    std::cout << "_______________________\n";
    std::vector<int> mult = {5, 3, 2, 1, 11};

    auto a = std::for_each(mult.begin(), mult.end(), MultStruct<int>());
    std::cout << "\n cout : " << a.count << std::endl;
    std::for_each(mult.cbegin(), mult.cend(), [](const int& i) { std::cout << i << "\t";  });

    std::cout << "_______________________\n";

    std::sort(mult.begin(), mult.end(),  SortStruct<int>());
    std::for_each(mult.cbegin(), mult.cend(), [](const int& i) { std::cout << i << "\t";  });


    return 0;
}
