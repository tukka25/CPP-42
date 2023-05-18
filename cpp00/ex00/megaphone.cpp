/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:51:16 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/18 18:35:14 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (ac > 1)
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << (char)toupper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}