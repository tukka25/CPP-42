#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: virtual public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string str);
        WrongCat(WrongCat &A);
        void    makeSound(void) const;
        WrongCat  &operator=(const WrongCat &A);
        // std::string    getType(void) const;
        ~WrongCat();
};

#endif