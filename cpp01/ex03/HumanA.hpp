#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string Name;
		std::string typeA;
		Weapon		*W;
	public:
		HumanA(std::string str, Weapon Ha);
		~HumanA();
		void	attack();
};
#endif