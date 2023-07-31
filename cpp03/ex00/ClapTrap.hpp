#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
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
		int getAttackDamage( void );
		int getEnergyPoints( void );
		int getHitPoints( void );
		void setAttackDamage(unsigned int i);
		void setEnergyPoints(unsigned int i);
		void setHitPoints(unsigned int i);
		std::string getname( void );
    	ClapTrap	&operator=(const ClapTrap &t);
};
#endif