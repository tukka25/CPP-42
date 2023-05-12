/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:01:08 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/12 19:10:20 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	p;
	Contact		c[8];
	std::string str;
	std::string g = "";
	int	i = 0;
	while (2)
	{
		std::cin >> str;
		// if (str != "")
		// 	i++;
		if ("EXIT" == str)
			return (0);
		else if (str == "SEARCH")
		{
			std::cout << "print the index : ";
			std::cin >> str;
			c[0].GetData();
		}
		else if (str == "ADD")
		{
			c[i].Contact::add();
		}
		else
			std::cout << "you can only use ADD, SEARCH or EXIT" << std::endl;
		i++;
	}
}