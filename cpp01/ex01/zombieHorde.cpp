/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:36:18 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/20 16:36:05 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int	i;

	i = 0;
	Zombie *r = new Zombie[N];
	while (i < N)
	{
		r[i].SetName(name);
		i++;
	}
	return (r);
}