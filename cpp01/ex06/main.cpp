#include "Harl.hpp"

int main(int ac, char *av[])
{
    Harl    harl;

    // void (Harl::*ptr)(std::string) = &Harl ::complain;
    // (harl.*ptr)("error");
    if (ac == 2)
    {
        harl.complain(av[1]);
    }
}