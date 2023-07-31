#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
		DiamondTrap();
        DiamondTrap(std::string str);
		DiamondTrap(const DiamondTrap &t);
		DiamondTrap	&operator=(const DiamondTrap &t);
        void    attack(const std::string &target);
        void whoAmI();
		~DiamondTrap();
};
#endif