#ifndef Cat_HPP
# define Cat_HPP

# include <iostream>
#include "Animal.hpp"

class Cat: virtual public Animal
{
    public:
        Cat();
        Cat(std::string str);
        Cat(Cat &A);
        void    makeSound(void) const; //good reason to put virtual
        Cat  &operator=(const Cat &A);
        // std::string    getType(void) const;
        ~Cat();
};

#endif