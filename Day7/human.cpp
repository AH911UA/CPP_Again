#include "human.h"

Human::Human()
{
    age = 0;
    name = "Empty";
}

Human::Human(int age, std::string name):age(age), name(name){}

Human::~Human(){}
