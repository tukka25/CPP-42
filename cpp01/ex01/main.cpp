/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:34:20 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/20 16:42:20 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int		i = 0;
	int		N;

	N = 10;
	Zombie *z;
	z = zombieHorde(N, "Tukka");
	while (i < N)
	{
		z[i].announce();
		i++;
	}
	delete []z;
}