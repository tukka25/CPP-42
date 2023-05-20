/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:47:02 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/20 18:07:43 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strptr = &str;
	std::string	&strref = str;

	std::cout << &str << std::endl;
	std::cout << strptr << std::endl;
	std::cout << &strref << std::endl;
	std::cout << str << std::endl;
	std::cout << *strptr << std::endl;
	std::cout << strref << std::endl;
}