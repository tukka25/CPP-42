#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string Name;
		std::string typeB;
		// Weapon		wb;
	public:
		HumanB(std::string str);
		~HumanB();
		void	setWeapon(Weapon hB);
		void	attack();
};
#endif