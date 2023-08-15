# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	*c = new DiamondTrap("Diamond");

	c->attack("tukka");
	c->whoAmI();
	delete c;	
}