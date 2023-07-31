#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include <iostream>
#include "WrongAnimal.hpp"

class WrongDog: virtual public WrongAnimal
{
    public:
        WrongDog();
        WrongDog(std::string str);
        WrongDog(WrongDog &A);
        void    makeSound(void) const;
        WrongDog  &operator=(const WrongDog &A);
        // std::string    getType(void) const;
        ~WrongDog();
};

#endif