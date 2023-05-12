/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:07:54 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/12 22:21:53 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


int	Contact::add()
{
	std::cout << "First Name: ";
	std::cin >> FirstName;
	std::cout << "Last Name: ";
	std::cin >> LastName;
	std::cout << "Nickname: ";
	std::cin >> Nickname;
	std::cout << "Darkest secert: ";
	std::cin >> DarkestSecert;
	std::cout << "Phone Number: ";
	if (!(std::cin >> PhoneNumber))
	{
		std::cin.clear();
	}
	// ContactsNum++;
	return (1);
}

void	Contact::GetData()
{
	if (FirstName == "" && Nickname == "" && DarkestSecert == "" 
		&& PhoneNumber == "" && LastName == "")
	{
		std::cout << "No Data For This Index" << std::endl;
		return ;
	}
	std::cout << FirstName << std::endl;
	std::cout << LastName << std::endl;
	std::cout << Nickname << std::endl;
	std::cout << DarkestSecert << std::endl;
	std::cout << PhoneNumber << std::endl;
}
