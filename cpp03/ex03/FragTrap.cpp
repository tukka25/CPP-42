# include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default FragTrap Constructor Called" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string str) : ClapTrap(), name(str)
{
    std::cout << "Parameterized FragTrap Constructor Called" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
}

void    FragTrap::attack(const std::string &target)
{
	if (this->EnergyPoints > 0 && this->HitPoints > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target
		<< " ,causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
	}
	else
	{
		if (this->EnergyPoints <= 0)
			std::cout << "No Energy Points" << std::endl;
		if (this->HitPoints <= 0)
			std::cout << "No Hit Points" << std::endl;
	}
}

int FragTrap::getAttackDamage( void )
{
	return (AttackDamage);
}

int FragTrap::getEnergyPoints( void )
{
	return (EnergyPoints);
}

int FragTrap::getHitPoints( void )
{
	return (HitPoints);
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap is requesting postive high fives🖐🏾" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor Called" << std::endl;
}
