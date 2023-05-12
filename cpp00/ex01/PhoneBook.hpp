/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:32:54 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/12 22:22:39 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Contact.hpp"

class PhoneBook {
	private:
	int			ContactsNum;
	Contact data[8];
	public:
	void	PrintTable();
	void	Increase();
};