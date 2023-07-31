#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    private:
        std::string name;
    public:
        void    guardGate();
		ScavTrap();
        ScavTrap(std::string str);
		ScavTrap(const ScavTrap &t);
		ScavTrap	&operator=(const ScavTrap &t);
        void    attack(const std::string &target);
        ~ScavTrap();
};
#endif