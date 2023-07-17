#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

enum string_n
{
    edebug,
    einfo,
    ewarning,
    eerror,
};

class Harl
{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
        int    stringlevel(std::string str);
    public:
        void    complain( std::string level );

};


#endif