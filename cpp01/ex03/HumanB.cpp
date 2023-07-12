/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:08:45 by abdamoha          #+#    #+#             */
/*   Updated: 2023/07/12 21:06:25 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	Name = str;
}

void	HumanB::attack()
{
	std::cout << Name << " attacks with their " << typeB << std::endl;
}

void	HumanB::setWeapon(Weapon hB)
{
	typeB = hB.getType();
}

HumanB::~HumanB()
{
	
}