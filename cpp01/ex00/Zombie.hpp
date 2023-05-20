/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 22:07:14 by abdamoha          #+#    #+#             */
/*   Updated: 2023/05/19 17:30:52 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
	std::string	Name;
	public:
	Zombie(std::string str);
	~Zombie();
	void	announce(void);
	void	SetName(std::string str);
	std::string	GetName();
};
Zombie	*NewZombie (std::string str);
void	randomChumb(std::string str);
#endif