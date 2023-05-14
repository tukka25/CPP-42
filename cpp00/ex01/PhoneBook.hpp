/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:32:54 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/13 19:15:30 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Contact.hpp"

class PhoneBook {
	private:
	int			ContactsNum;
	Contact data[8];
	public:
	// PhoneBook();
	// ~PhoneBook();
	int		add(int i);
	void	GetData(int index);
	// void	GetData(int index);
	void	PrintTable();
	void	Increase();
};