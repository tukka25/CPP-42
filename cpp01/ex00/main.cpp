/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 22:06:59 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/19 17:30:41 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z;
	
	z = NewZombie("abdalrahman");
	z->announce();
	randomChumb("abdamoha");
	delete z;
}