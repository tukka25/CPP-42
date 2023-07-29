# include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string str) :name(str)
{
    std::cout << "Default ClapTrap Constructor Called" << std::endl;
	this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    // name = str;
    // HitPoints = 100;
    // EnergyPoints = 50;
    // AttackDamage = 20;
}

void    ClapTrap::attack(const std::string &target)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout << "ClapTrap " << getname() << " attacks " << target
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
	if ((int)(getHitPoints() - amount) > 0)
		setHitPoints(getHitPoints() - amount);
	else
		setHitPoints(0);
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (getHitPoints() > 0 && getEnergyPoints() > 0)
	{
		std::cout << "ClapTrap " << getname() << " repaired" << std::endl;
		setHitPoints(getHitPoints() + amount);
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

std::string ClapTrap::getname( void )
{
	return (name);
}

int ClapTrap::getAttackDamage( void )
{
	return (AttackDamage);
}

int ClapTrap::getEnergyPoints( void )
{
	return (EnergyPoints);
}

int ClapTrap::getHitPoints( void )
{
	return (HitPoints);
}

void ClapTrap::setEnergyPoints(unsigned int i)
{
	EnergyPoints = i;
}

void ClapTrap::setAttackDamage(unsigned int i)
{
	AttackDamage = i;
}

void ClapTrap::setHitPoints(unsigned int i)
{
	HitPoints = i;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor Called" << std::endl;
}