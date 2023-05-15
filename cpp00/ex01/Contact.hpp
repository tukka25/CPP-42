/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:35:54 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/15 20:19:04 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstdlib>
# include <string>

class Contact {
	private:
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	DarkestSecert;
	std::string	PhoneNumber;
	public:
	// void	GetData(int index);
	void	setLastName(std::string aLastName);
	void	setFirstName(std::string aFirstName);
	void	setNickname(std::string aNickname);
	void	setDarkestSecret(std::string aDarkestSecret);
	void	setPhoneNumber(std::string aPhoneNumber);
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getDarkestSecret();
	std::string	getPhoneNumber();
	
};