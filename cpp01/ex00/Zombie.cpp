/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 22:48:26 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/19 17:31:41 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
	Name = str;
}

void Zombie::SetName(std::string str)
{
	Name = str;
}

std::string	Zombie::GetName()
{
	return (Name);
}

void	Zombie::announce()
{
	std::cout << GetName() << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << Name << std::endl;
}