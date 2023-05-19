/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:01:08 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/19 23:31:14 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	p;
	std::string str;
	std::string	index;
	std::string g = "";
	int	i = 0;
	p.SetContactNum(1);
	std::cout << "\033[1;31m wellcome to the your phonebook \033[0m " << std::endl << std::endl;
	std::cout << "\033[36m USE ADD TO ADD USER \033[0m " << std::endl;
	std::cout << "\033[36m USE SEARCH TO SEARCH USER \033[0m " << std::endl;
	std::cout << "\033[36m USE EXIT TO EXIT \033[0m " << std::endl << std::endl;
	while (2)
	{
		std::cout << "Enter The Command: ";
		std::cin >> str;
		if (std::cin.eof())
			return (0);
		if ("EXIT" == str)
			return (0);
		else if (str == "SEARCH")
		{
			p.SetContactNum(0);
			p.PrintTable();
			std::cout << "print the index : ";
			std::cin >> index;
			if (std::cin.eof())
				return (0);
			p.GetData(index);
		}
		else if (str == "ADD")
		{
			if (i == 8)
			{
				i = 0;
			}
			if (p.add(i) == 0)
				return (0);
			p.Increase();
			std::cout << "\033[1;32m User Added Sucessfully\033[0m" << std::endl;
			i++;
			
		}
		else
			std::cout << "\033[1;31m you can only use ADD, SEARCH or EXIT \033[0m" << std::endl << std::endl;
	}
}