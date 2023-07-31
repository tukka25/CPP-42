# include "ClapTrap.hpp"

int main()
{
	ClapTrap	a("tukka");

	a.attack("ahmed");
	std::cout << a.getEnergyPoints() << std::endl;
}