/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:15:19 by abdamoha          #+#    #+#             */
/*   Updated: 2023/07/11 21:37:40 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	type = str;
}

const std::string	&Weapon::getType()
{
	return (type);
}

void	Weapon::SetType(std::string NewStr)
{
	type = NewStr;
}

Weapon::~Weapon ()
{
	
}