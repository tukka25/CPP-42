#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie 
{
	private:
	std::string Name;
	public:
	Zombie();
	~Zombie();
	void	SetName(std::string str);
	std::string	GetName();
	void	announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif