/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:19:23 by abdamoha          #+#    #+#             */
/*   Updated: 2023/07/11 21:34:17 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.SetType("some other type of club");
		std::cout << club.getType() << std::endl;
		bob.attack();
	}
	// Weapon	w("Gun");
	// HumanA bob("bob", w);
	// HumanB Tukka("Tukka");
	// bob.attack();
	// Weapon	f("");
	// Tukka.SetWeapon(f);
	// Tukka.attack();
	// f.SetType("Doshka");
	// Tukka.SetWeapon(f);
	// Tukka.attack();

}