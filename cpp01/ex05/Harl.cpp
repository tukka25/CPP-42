# include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii" << std::endl;
}
void    Harl::info(void)
{
    std::cout << "You forgot the i increment" << std::endl;
}
void    Harl::warning(void)
{
    std::cout << "Warning: infinte loop" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "You used '99.99%' of the memory" << std::endl;
}

void    Harl::complain(std::string level)
{
    (void)level;
    debug();
    error();
    warning();
    info();
}