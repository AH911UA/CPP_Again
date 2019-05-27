#include "figure.h"
#include "circle.h"
#include "rectangle.h"

int main()
{

    Rectangle *r = new Rectangle (2, 4, 6);

    r->Area();
    r->Print();

    std::cout << std::endl << std::endl;

    Circle *c = new Circle (888);

    c->Area();
    c->Print();

    std::getchar();
    delete r;
    return 0;
}
