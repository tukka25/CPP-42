/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 01:23:57 by abdamoha          #+#    #+#             */
/*   Updated: 2023/07/12 17:18:14 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &Ha) : Name(str), W(Ha)
{
	typeA = Ha.getType();
}

void	HumanA::attack()
{
	std::cout << Name << " attacks with their " << W.getType() << std::endl;
}

HumanA::~HumanA()
{
	
}