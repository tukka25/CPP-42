/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:35:54 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/12 22:20:56 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class Contact {
	private:
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	DarkestSecert;
	std::string	PhoneNumber;
	public:
	int		add();
	void	GetData();
	
};