/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 22:48:26 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/17 23:07:46 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "I am here" << std::endl;
}

void	Zombie::SetName(std::string str)
{
	Name = str;
}

std::string	Zombie::GetName()
{
	return (Name);
}

Zombie::~Zombie()
{
	std::cout << "bye" << std::endl;
}