#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	protected:
		int getAttackDamage( void );
		int getEnergyPoints( void );
		int getHitPoints( void );
    private:
        std::string name;
    public:
    	void    highFivesGuys(void);
        FragTrap();
		FragTrap(const FragTrap &t);
        FragTrap(std::string str);
		FragTrap	&operator=(const FragTrap &t);
        void    attack(const std::string &target);
        ~FragTrap();
};
#endif