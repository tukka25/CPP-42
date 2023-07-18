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

	std::string levels[4] = {"debug", "error", "warning", "info"};
	void (Harl::*ptrdebug)() = &Harl::debug;
	void (Harl::*ptrerror)() = &Harl::error;
	void (Harl::*ptrwarning)() = &Harl::warning;
	void (Harl::*ptrinfo)() = &Harl::info;
	void (Harl::*funptr_arr[4])();
	funptr_arr[0] = ptrdebug;
	funptr_arr[1] = ptrerror;
	funptr_arr[2] = ptrwarning;
	funptr_arr[3] = ptrinfo;
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			(harl.*funptr_arr[i])();
	}
}

Harl::~Harl()
{
}