# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string str) :name(str)
{
    std::cout << "Default ScavTrap Constructor Called" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
//     // HitPoints = 100;
//     // EnergyPoints = 50;
//     // AttackDamage = 20;
}

void    ScavTrap::attack(const std::string &target)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout << "ScavTrap " << getname() << " attacks " << target
		<< " ,causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
	{
		if (getEnergyPoints() <= 0)
			std::cout << "No Energy Points" << std::endl;
		if (getHitPoints() <= 0)
			std::cout << "No Hit Points" << std::endl;
	}

}

// ScavTrap	&ScavTrap::operator=(const ScavTrap &t)
// {
// 	if (this != &t)
// 	{
// 		this->name = t.name;
// 		this->HitPoints = t.HitPoints;
// 		this->EnergyPoints = t.EnergyPoints;
// 		this->AttackDamage = t.AttackDamage;
// 	}
// 	return (*this);
// }

// void    ScavTrap::takeDamage(unsigned int amount)
// {
// 	if ((int)(getHitPoints() - amount) > 0)
// 		setHitPoints(getHitPoints() - amount);
// 	else
// 		setHitPoints(0);
// }

// void    ScavTrap::beRepaired(unsigned int amount)
// {
// 	if (getHitPoints() > 0 && getEnergyPoints() > 0)
// 	{
// 		std::cout << "ScavTrap " << getname() << " repaired" << std::endl;
// 		setHitPoints(getHitPoints() + amount);
// 		setEnergyPoints(getEnergyPoints() - 1);
// 	}
// 	else
// 	{
// 		if (getEnergyPoints() <= 0)
// 			std::cout << "No Energy Points" << std::endl;
// 		if (getHitPoints() <= 0)
// 			std::cout << "No Hit Points" << std::endl;
// 	}
// }

// std::string ScavTrap::getname( void )
// {
// 	return (name);
// }

// int ScavTrap::getAttackDamage( void )
// {
// 	return (AttackDamage);
// }

// int ScavTrap::getEnergyPoints( void )
// {
// 	return (EnergyPoints);
// }

// int ScavTrap::getHitPoints( void )
// {
// 	return (HitPoints);
// }

// void ScavTrap::setEnergyPoints(unsigned int i)
// {
// 	EnergyPoints = i;
// }

// void ScavTrap::setAttackDamage(unsigned int i)
// {
// 	AttackDamage = i;
// }

// void ScavTrap::setHitPoints(unsigned int i)
// {
// 	HitPoints = i;
// }

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor Called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "Scav Trap is now in Gate keeper mode" << std::endl;
}