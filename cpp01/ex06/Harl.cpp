# include "Harl.hpp"

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

int    Harl::stringlevel(std::string str)
{
    if (str == "debug")
        return (edebug);
    if (str == "info")
        return (einfo);
    if (str == "warning")
        return (ewarning);
    if (str == "error")
        return (eerror);
    return(5);
}

void    Harl::complain(std::string level)
{
    switch (stringlevel(level))
    {
        case edebug:
        {
            debug();
        }
        case einfo:
        {
            info();
        }
        case ewarning:
        {
            warning();
        }
        case eerror:
        {
            error();
            break;
        }
        case (5):
            std::cout << "this error is from the for loop not from me" <<std::endl;
    }
}