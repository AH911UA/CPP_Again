#ifndef DOG_H
#define DOG_H


class Dog
{
public:
    Dog();
    ~Dog();

    int GetAge() const { return age; }

    void operator++()
    {
        ++this->age;
    }

private:
    int age ;
};

#endif // DOG_H
