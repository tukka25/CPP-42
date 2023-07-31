#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    private:
        std::string name;
    public:
    	void    highFivesGuys(void);
		FragTrap();
        FragTrap(std::string str);
		FragTrap(const FragTrap &t);
        void    attack(const std::string &target);
        ~FragTrap();
		FragTrap	&operator=(const FragTrap &t);
};
#endif