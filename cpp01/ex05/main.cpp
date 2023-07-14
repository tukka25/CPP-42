#include "Harl.hpp"

int main()
{
    Harl    harl;

    (void)harl;
    void (Harl::*ptr)(std::string) = &Harl :: complain;
    Harl    t;

    (t.*ptr)("error");
    // harl.complain;
}