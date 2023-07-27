# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str)
{
    std::cout << "Default Constructor Called" << std::endl;
    name = str;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackPoints = 10;
}

void    ClapTrap::attack(std::string &target)
{
}

void    ClapTrap::takeDamage(unsigned int amount)
{
}

void    ClapTrap::beRepaired(unsigned int amount)
{
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor Called" << std::endl;
}