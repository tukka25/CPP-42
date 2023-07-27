#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
		std::string			name;
		int                 HitPoints;
		int                 EnergyPoints;
		int                 AttackPoints;
    public:
        ClapTrap(std::string str);
        ClapTrap(const ClapTrap &t);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
		int getAttackPoints( void ) const;
		int getEnergyPoints( void ) const;
		int getHitPoints( void ) const;
		// void setRawBits( int const raw );
    void	operator=(const ClapTrap &t);
};
#endif