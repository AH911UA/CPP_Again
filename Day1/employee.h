#ifndef EMPLOYEE_H
#define EMPLOYEE_H


class Employee
{
public:

    void SetAge(int age) { Age = age; }
    int GetAge() const { return Age; }

    void SetYearOfService(int year) { YearOfService = year; }
    int GetYearOfService() { return YearOfService; }

    void SetSelary(float salary) { Salary = salary; }
    float GetSelary() const { return Salary; }

    Employee();
    Employee(int age, int year, float salary) : Age(age), YearOfService(year), Salary(salary){}
    ~Employee();

private:
    int Age;
    int YearOfService;
    float Salary;
};

#endif // EMPLOYEE_H
