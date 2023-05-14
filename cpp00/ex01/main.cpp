/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:01:08 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/14 20:19:05 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	p;
	// Contact		c[8];
	std::string str;
	int			index = 0;
	std::string g = "";
	int	i = 0;
	std::cout << "\033[1;31m wellcome to the your phonebook \033[0m " << std::endl;
	while (2)
	{
		std::cin >> str;
		if (std::cin.eof())
			return (0);
		if ("EXIT" == str)
			return (0);
		else if (str == "SEARCH")
		{
			p.PrintTable();
			std::cout << "print the index : ";
			std::cin >> index;
			if (std::cin.eof())
				return (0);
			p.GetData(index);
		}
		else if (str == "ADD")
		{
			if (p.add(i) == 0)
				return (0);
			p.Increase();
			std::cout << "\033[1;32m User Added Sucessfully\033[0m" << std::endl;
			i++;
			
		}
		else
			std::cout << "you can only use ADD, SEARCH or EXIT" << std::endl;
	}
}