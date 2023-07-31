#ifndef Dog_HPP
# define Dog_HPP

# include <iostream>
#include "Animal.hpp"

class Dog: virtual public Animal
{
    public:
        Dog();
        Dog(std::string str);
        Dog(Dog &A);
        void    makeSound(void) const;
        Dog  &operator=(const Dog &A);
        // std::string    getType(void) const;
        ~Dog();
};

#endif