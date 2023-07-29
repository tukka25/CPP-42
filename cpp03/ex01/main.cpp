# include "ClapTrap.hpp"

int main()
{
	ClapTrap	a("tukka");

	a.attack("ahmed");
	std::cout << a.getEnergyPoints() << std::endl;
	a.attack("ahmed");
	std::cout << a.getEnergyPoints() << std::endl;
	a.takeDamage(7);
	// std::cout << "Hp ==" << a.getHitPoints() << std::endl;
	// a.takeDamage(7);
	// std::cout << "Hp ==" << a.getHitPoints() << std::endl;
}