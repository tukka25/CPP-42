#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string Name;
		std::string typeB;
	public:
		HumanB(std::string str);
		~HumanB();
		void	SetWeapon(Weapon hB);
		void	attack();
};
#endif