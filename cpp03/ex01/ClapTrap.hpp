#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
		std::string			name;
		int                 HitPoints;
		int                 EnergyPoints;
		int                 AttackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string str);
        ClapTrap(const ClapTrap &t);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
		std::string getname( void );
    	ClapTrap	&operator=(const ClapTrap &t);
};
#endif