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
        // void    guardGate();
    // private:
	// 	std::string			name;
	// 	int                 HitPoints;
	// 	int                 EnergyPoints;
	// 	int                 AttackDamage;
    // public:
        DiamondTrap(std::string str);
        void    attack(const std::string &target);
        void whoAmI();
        // ~DiamondTrap();
    //     ClapTrap(const ClapTrap &t);
    //     ~ClapTrap();
    //     void attack(const std::string& target);
    //     void takeDamage(unsigned int amount);
    //     void beRepaired(unsigned int amount);
	// 	int getAttackDamage( void );
	// 	int getEnergyPoints( void );
	// 	int getHitPoints( void );
	// 	void setAttackDamage(unsigned int i);
	// 	void setEnergyPoints(unsigned int i);
	// 	void setHitPoints(unsigned int i);
	// 	std::string getname( void );
	// 	// void setRawBits( int const raw );
    // 	ClapTrap	&operator=(const ClapTrap &t);
};
#endif