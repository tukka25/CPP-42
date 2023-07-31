# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main()
{
	ScavTrap	b("moha");
	ClapTrap	a("tukka");
	ClapTrap	c(a);

	c.attack("abda");
	b.guardGate();
	b.attack("abda");
}