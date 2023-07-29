# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string str) :name(str)
{
    std::cout << "Default ScavTrap Constructor Called" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

void    ScavTrap::attack(const std::string &target)
{
	if (this->EnergyPoints > 0 && this->HitPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target
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

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor Called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "Scav Trap is now in Gate keeper mode" << std::endl;
}