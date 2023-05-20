/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:33:58 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/20 16:41:03 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ()
{
	std::string Name = "";
	// std::cout << "hi" << std::endl;
}

void	Zombie::announce()
{
	std::cout << Name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::SetName(std::string str)
{
	Name = str;
}

std::string	Zombie::GetName()
{
	return (Name);
}

Zombie::~Zombie ()
{
	// std::cout << "bye" << std::endl;
}