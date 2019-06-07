#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <bitset>


template <typename T>
void PrintArr(T& t)
{
    for (auto i = t.cbegin(); i < t.cend(); i++)
        std::cout << *i << "\t";
    std::cout << "\n____________________\n";
}


template <typename T>
struct StrE{
    bool operator()(T& t1, T& t2)
    {
        std::transform(t1.begin(), t1.end(), t1, tolower);
        std::transform(t2.begin(), t2.end(), t2, tolower);
        return (t1 == t2);
    }
};

class Person
{
public:
    Person(){}
    Person(int a, bool isF):age(a), isFamale(isF){}

    int age;
    bool isFamale;
};

struct Comp
{
    bool operator()(const Person& p, const Person& pp)
    {
        if(p.age < pp.age) return true;
        else if(p.age == pp.age)
           if(p.isFamale) return false;
            else return true;
        else return false;
    }
};


int main()
{
    std::vector<int> arr = {3, 5, 8, 1, 3, 7 } ;
    std::sort(arr.begin(), arr.end(),
              [](const int& a, const int& b) -> bool { return  a > b; });

    PrintArr(arr);



    int y = 100;
    std::for_each(arr.begin(), arr.end(), [y](int& a) -> int { return a += y; });

    PrintArr(arr);

    std::priority_queue<Person, std::vector<Person>, Comp> p ;
    p.push(Person(10, true));
    p.push(Person(90, false ));
    p.push(Person(5, false ));
    p.push(Person(33, true));
    p.push(Person(22, true));

    while (!p.empty()) {
        std::cout << p.top().age << " : " << p.top().isFamale << std:: endl;
        p.pop();
    }

    std::cout << "\n_________________\n";

    std::bitset<10> bf ("1010110010");
    std::bitset<10> bs ("0111111110");

    for (int i = 0; i < bf.size(); i++)
        std::cout << bf[i] << " ";

    std::bitset<20> br ;
    for (int i = 0; i < (bf.size() + bs.size()); i++){
        if(bf.size() > i) br[i] = bf[i];
        else br[i] = bs[i-10];
    }

    std::cout << "\n\n";

    for (int i = 0; i < br.size(); i++)
        std::cout << br[i] << " ";

    return 0;
}
