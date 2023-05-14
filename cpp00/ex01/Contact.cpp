/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:07:54 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/13 18:51:11 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setLastName(std::string aLastName)
{
	LastName = aLastName;
}

void	Contact::setFirstName(std::string aFirstName)
{
	FirstName = aFirstName;
}
void	Contact::setNickname(std::string aNickname)
{
	Nickname = aNickname;
}
void	Contact::setDarkestSecret(std::string aDarkestSecret)
{
	DarkestSecert = aDarkestSecret;
}

void	Contact::setPhoneNumber(std::string aPhoneNumber)
{
	PhoneNumber = aPhoneNumber;
}

std::string	Contact::getLastName()
{
	return (LastName);
}
std::string	Contact::getFirstName()
{
	return (FirstName);
}
std::string	Contact::getNickname()
{
	return (Nickname);
}
std::string	Contact::getDarkestSecret()
{
	return (DarkestSecert);
}
std::string	Contact::getPhoneNumber()
{
	return (PhoneNumber);
}

// void	Contact::GetData(int index)
// {
// 	// if (FirstName == "" && Nickname == "" && DarkestSecert == "" 
// 	// 	&& PhoneNumber == "" && LastName == "")
// 	// {
// 	// 	std::cout << "No Data For This Index" << std::endl;
// 	// 	return ;
// 	// }
// 	(void)index;
// 	std::cout << getFirstName() << std::endl;
// 	std::cout << getLastName() << std::endl;
// 	std::cout << getNickname() << std::endl;
// 	std::cout << getDarkestSecret() << std::endl;
// 	std::cout << getPhoneNumber() << std::endl;
// }