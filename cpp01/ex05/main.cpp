#include "Harl.hpp"

int main()
{
    Harl    harl;

    void (Harl::*ptr)(std::string) = &Harl::complain;
    (harl.*ptr)("error");
}