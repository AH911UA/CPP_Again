#include <iostream>
#include "square.h"


int main()
{
    int l = 0;

    std::cout << "Enter the len : ";
    std::cin >> l;

    Square *s = new Square (l);

    std::cout << " l : " << s->GetLen() << "\t w : " << s->GetWidth() << std::endl;

    Square *clone = s->Clone();

    std::cout << "Clone : " << std::endl << " l : " << clone->GetLen() << "\t w : " << clone->GetWidth() << std::endl;


    delete  s;
    delete clone;

    s = nullptr;
    clone = nullptr;
    return 0;
}
