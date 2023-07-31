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
    // private:
	// 	std::string			name;
	// 	int                 HitPoints;
	// 	int                 EnergyPoints;
	// 	int                 AttackDamage;
    // public:
        FragTrap();
        FragTrap(std::string str);
        void    attack(const std::string &target);
        ~FragTrap();
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