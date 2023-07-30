# include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string str) :name(str)
{
    std::cout << "Default ClapTrap Constructor Called" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

void    ClapTrap::attack(const std::string &target)
{
	if (this->EnergyPoints > 0 && this->HitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target
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

ClapTrap	&ClapTrap::operator=(const ClapTrap &t)
{
	if (this != &t)
	{
		this->name = t.name;
		this->HitPoints = t.HitPoints;
		this->EnergyPoints = t.EnergyPoints;
		this->AttackDamage = t.AttackDamage;
	}
	return (*this);
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)(this->HitPoints - amount) > 0)
		this->HitPoints = (this->HitPoints - amount);
	else
		this->HitPoints = 0;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HitPoints > 0 && this->EnergyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " repaired" << std::endl;
		this->HitPoints = (this->HitPoints + amount);
		this->EnergyPoints = (this->EnergyPoints - 1);
	}
	else
	{
		if (this->EnergyPoints <= 0)
			std::cout << "No Energy Points" << std::endl;
		if (this->HitPoints <= 0)
			std::cout << "No Hit Points" << std::endl;
	}
}

std::string ClapTrap::getname( void )
{
	return (name);
}

// int ClapTrap::getAttackDamage( void )
// {
// 	return (AttackDamage);
// }

// int ClapTrap::getEnergyPoints( void )
// {
// 	return (EnergyPoints);
// }

// int ClapTrap::getHitPoints( void )
// {
// 	return (HitPoints);
// }

// void ClapTrap::setEnergyPoints(unsigned int i)
// {
// 	EnergyPoints = i;
// }

// void ClapTrap::setAttackDamage(unsigned int i)
// {
// 	AttackDamage = i;
// }

// void ClapTrap::this->HitPoints = (unsigned int i)
// {
// 	HitPoints = i;
// }

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor Called" << std::endl;
}