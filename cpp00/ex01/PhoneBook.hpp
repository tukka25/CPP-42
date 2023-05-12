/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:32:54 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/12 16:20:08 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Contact.hpp"

class PhoneBook {
	private:
	Contact data[8];
	public:
	void add();
	void set_value(std::string str);
	std::string get_values(std::string str);
};