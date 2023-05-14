/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:34:33 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/14 20:18:08 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

void	PhoneBook::GetData(int index)
{
	if (data[index].getFirstName() == "" && data[index].getNickname() == "" && data[index].getDarkestSecret() == "" 
		&& data[index].getPhoneNumber() == "" && data[index].getLastName() == "")
	{
		std::cout << "No Data For This Index" << std::endl;
		return ;
	}
	(void)index;
	// std::cout << data[index].getDarkestSecret() << std::endl;
	std::cout << data[index].getFirstName() << std::endl;
	std::cout << data[index].getLastName() << std::endl;
	std::cout << data[index].getNickname() << std::endl;
	std::cout << data[index].getDarkestSecret() << std::endl;
	std::cout << data[index].getPhoneNumber() << std::endl;
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
	if (std::cin.eof())
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
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "| index      | first name | last name  |  nickname  |" << std::endl;
	std::cout << "|            |            |            |            |" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	for (int i = 0; i < ContactsNum; i++)
	{
		// std::cout.width(10);
		std::cout << "|    " << std::setw(i) << i << "       | ";
		// std::cout.width(12);
		std::cout  << std::setw(10) << data[i].getFirstName() << " | ";
		// std::cout.width(6);
		std::cout << std::setw(10) << data[i].getLastName() << " | ";
		// std::cout.width(6);
		std::cout  << std::setw(10) << data[i].getNickname() << " |" << std::endl;
		// std::cout.width(10);
		std::cout << "-----------------------------------------------------" << std::endl;
	}
}

// std::string	PhoneBook::getLastName()
// {
// 	return (data[0].LastName);
// }
// std::string	PhoneBook::getFirstName()
// {
// 	return (FirstName);
// }
// std::string	PhoneBook::getNickname()
// {
// 	return (Nickname);
// }
// std::string	PhoneBook::getDarkestSecret()
// {
// 	return (DarkestSecert);
// }
// std::string	PhoneBook::getPhoneNumber()
// {
// 	return (PhoneNumber);
// }