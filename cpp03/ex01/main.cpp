# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main()
{
	ScavTrap	b("moha");
	ClapTrap	a("tukka");

	// a.attack("ahmed");
	std::cout << "b = " << b.getHitPoints() << std::endl;
	std::cout << "b = " << b.getAttackDamage() << std::endl;
	std::cout << "b = " << b.getEnergyPoints() << std::endl;
	std::cout << "a = " << a.getHitPoints() << std::endl;
	std::cout << "a = " << a.getAttackDamage() << std::endl;
	std::cout << "a = " << a.getEnergyPoints() << std::endl;
	b.guardGate();
	b.attack("abda");
	std::cout << "b = " << b.getEnergyPoints() << std::endl;
	std::cout << "a = " << a.getEnergyPoints() << std::endl;
	// std::cout << a.getEnergyPoints() << std::endl;
	// a.attack("ahmed");
	// std::cout << a.getEnergyPoints() << std::endl;
	// a.takeDamage(7);
	// std::cout << "Hp ==" << a.getHitPoints() << std::endl;
	// a.takeDamage(7);
	// std::cout << "Hp ==" << a.getHitPoints() << std::endl;
}