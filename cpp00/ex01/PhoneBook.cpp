/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:34:33 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/18 18:36:41 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::GetData(std::string str)
{
	int	index;

	std::istringstream i(str);
	i >> index;
	std::cout << index << std::endl;
	if (index > 9 || (str != "0" && index == 0) || index < 0)
	{
		std::cout << "Wrong Input" << std::endl;
		return ;
	}
	if (index >= ContactsNum)
	{
		std::cout << "No Data For This Index" << std::endl;
		return ;
	}
	(void)index;
	std::cout <<" First Name     : " << data[index].getFirstName() << std::endl;
	std::cout <<" Last Name      : " << data[index].getLastName() << std::endl;
	std::cout <<" Nickname       : " << data[index].getNickname() << std::endl;
	std::cout <<" Darkest Secret : " << data[index].getDarkestSecret() << std::endl;
	std::cout <<" Phone Number   : " << data[index].getPhoneNumber() << std::endl;
}

void	PhoneBook::Increase()
{
	ContactsNum++;
}

int	PhoneBook::add(int i)
{
	std::string	str;
	std::cout << "First Name: ";
	std::cin >> str;
	if (std::cin.eof() || std::cin.bad())
		return(0);
	data[i].setFirstName(str);
	std::cout << "Last Name: ";
	std::cin >> str;
	if (std::cin.eof())
		return (0);
	data[i].setLastName(str);
	std::cout << "Nickname: ";
	std::cin >> str;
	if (std::cin.eof())
		return (0);
	data[i].setNickname(str);
	std::cout << "Darkest secert: ";
	std::cin >> str;
	if (std::cin.eof())
		return (0);
	data[i].setDarkestSecret(str);
	std::cout << "Phone Number: ";
	std::cin >> str;
	if (std::cin.eof())
		return (0);
	data[i].setPhoneNumber(str);
	return (1);
}

void	PhoneBook::PrintTable()
{
	std::string str;
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "|  index    | first name | last name |  nickname |" << std::endl;
	std::cout << "|           |            |           |           |" << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	for (int i = 0; i < ContactsNum; i++)
	{
		std::cout << "|";
		std::cout.width(11);
		std::cout << i << "|";
		str = data[i].getFirstName();
		if (str.length() > 9)
		{
			str = str.substr(0, 9);
			std::cout.width(11);
			std::cout  << str << "." << "|";
		}
		else
		{
			std::cout.width(12);
			std::cout  << str << "|";
		}
		str = data[i].getLastName();
		if (str.length() > 9)
		{
			str = str.substr(0, 9);
			std::cout.width(10);
			std::cout  << str << "." << "|";
		}
		else
		{
			std::cout.width(11);
			std::cout  << str << "|";
		}
		str = data[i].getNickname();
		if (str.length() > 9)
		{
			str = str.substr(0, 9);
			std::cout.width(10);
			std::cout  << str << "." << "|" << std::endl;
		}
		else
		{
			std::cout.width(11);
			std::cout  << str << "|" << std::endl;
		}
		std::cout << "--------------------------------------------------" << std::endl;
	}
}

// int	PhoneBook::ft_isdigit(std::string str)
// {
// 	for (int i = 0; str[i] ; i++)
// 	{
// 		if (isdigit(str[i]) == 0)
// 			return (0);
// 	}
// 	return (1);
// }

void	PhoneBook::SetContactNum()
{
	if (ContactsNum > 8)
		ContactsNum = 8;
}

// int	PhoneBook::ft_atoi(std::string str)
// {
// 	int	result;

// 	result = 0;
// 	for (int i = 0; str[i]; i++)
// 	{
// 		if (isalpha(str[i]) == 1 || isascii(str[i]) == 0)
// 			return (10);
// 		if (str[i] == '+' || str[i] == '-')
// 			i++;
// 		if (str[i] == '+' || str[i] == '-')
// 			return (11);
// 		while (str[i] >= '0' && str[i] <= '9' && str[i])
// 		{
// 			if (isalpha(str[i]) == 1 || isascii(str[i]) == 0)
// 				return (12);
// 			result = result * 10 + str[i] - '0';
// 			if (result > 9)
// 				return (13);
// 			i++;
// 		}
// 	}
// 	return (result);
// }
