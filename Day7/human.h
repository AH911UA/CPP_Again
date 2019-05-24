#ifndef HUMAN_H
#define HUMAN_H
#include <string>

class Human
{
public:
    Human();
    Human(int, std::string);
    ~Human();

private:
    int age;
    std::string name;
};

#endif // HUMAN_H
