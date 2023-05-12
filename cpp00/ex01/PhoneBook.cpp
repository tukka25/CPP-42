/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:34:33 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/12 22:29:39 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


void	PhoneBook::Increase()
{
	ContactsNum++;
}

void	PhoneBook::PrintTable()
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "|  index     |  first name |  last name   |  nickname   |" << std::endl;
	std::cout << "|            |             |              |             |" << std::endl;
	std::cout << "--------------------------------------------------------" << std::endl;
	for (int i = 0; i < ContactsNum ; i++)
	{
		std::cout << i << "     |" << std::endl;
		std::cout << data[i].FirstName << "     |" << std::endl;
		// std::cout << "|            |            |             |            |" << std::endl;
		// std::cout << "------------------------------------------------------" << std::endl;
	}
}