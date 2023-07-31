# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default DiamondTrap Constructor Called" << std::endl;
	this->HitPoints = this->FragTrap::HitPoints;
    this->EnergyPoints = this->ScavTrap::EnergyPoints;
    this->AttackDamage = this->FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(std::string str) : ClapTrap(str), name(str)
{
	std::cout << "Parameterized DiamondTrap Constructor Called" << std::endl;
    ClapTrap::name = (str + "_clap_name");
    this->HitPoints = this->FragTrap::HitPoints;
    this->EnergyPoints = this->ScavTrap::EnergyPoints;
    this->AttackDamage = this->FragTrap::AttackDamage;
    // std::cout << "Name : " << this->name << std::endl;
    // std::cout << "HitPoint : " << this->HitPoints << std::endl;
    // std::cout << "EnergyPoints : " << this->EnergyPoints << std::endl;
    // std::cout << "AttackDamage : " << this->AttackDamage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &t)  : ClapTrap(t), ScavTrap(t) ,FragTrap(t)
{
	*this = t;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &t)
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

void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "my name : " << this->name <<  std::endl << "ClapTrap name : " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor Called" << std::endl;
}
