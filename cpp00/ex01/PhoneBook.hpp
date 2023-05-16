/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:32:54 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/16 20:03:56 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstdlib>
# include <string>
# include "Contact.hpp"
// #include <cstdlib>

class PhoneBook {
	private:
	int			ContactsNum;
	Contact data[8];
	public:
	// PhoneBook();
	// ~PhoneBook();
	int		add(int i);
	void	GetData(int index);
	void	PrintTable();
	int		ft_isdigit(std::string str);
	int		ft_atoi(std::string str);
	void	Increase();
	void	SetContactNum();
};