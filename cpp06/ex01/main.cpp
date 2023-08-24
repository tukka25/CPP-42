#include "Data.hpp"

int main()
{
    uintptr_t t;
    Data *d = NULL;
    t = Data::serialize(d);
    if (Data::deserialize(t) == d)
        std::cout << "Heey u are just a amazing coder" << std::endl;
    else
        std::cout << "booooo looser" << std::endl;
}