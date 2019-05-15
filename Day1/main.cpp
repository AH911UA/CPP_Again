#include <iostream>
#include <vector>
#include <math.h>
#include "employee.h"


int main()
{
    std::vector<Employee> emps (2);

    try {

        int k = 1;
        for (std::vector<Employee>::iterator iter = emps.begin(); iter != emps.end(); iter++)
        {
            iter->SetAge(25 * k);
            iter->SetYearOfService(3 * k);
            iter->SetSelary(20000 * k);

            k += 1.5;
        }

        for (std::vector<Employee>::iterator iter = emps.begin(); iter != emps.end(); iter++)
        {
            std::cout << iter->GetAge() << std::endl;
            std::cout << iter->GetYearOfService() << std::endl;
            std::cout << iter->GetSelary() << std::endl << std::endl;
        }

    }
    catch (...) {

    }

    std::getchar();

    return 0;
}
