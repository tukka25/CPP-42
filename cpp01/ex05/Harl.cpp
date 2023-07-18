# include "Harl.hpp"

Harl::Harl()
{
}

void    Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii" << std::endl;
}
void    Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
    std::cout << "You forgot the i increment" << std::endl;
}
void    Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
    std::cout << "Warning: infinte loop" << std::endl;
}

void    Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
    std::cout << "You used '99.99%' of the memory" << std::endl;
}

void    Harl::complain(std::string level)
{
	Harl    harl;
	(void)	level;
	void (Harl::*ptrerror)() = &Harl::error;
	// void (Harl::*ptrdebug)() = &Harl::debug;
	// void (Harl::*ptrwarning)() = &Harl::warning;
	// void (Harl::*ptrinfo)() = &Harl::info;
	(harl.*ptrerror)();
	// int	i = 0;
	// while (i < 4)
	// {
	// 	if (level == (harl.*ptrerror)())
	// 		error();
	// }
    // error();
    // debug();
    // warning();
    // info();
}

Harl::~Harl()
{
}