#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: virtual public Animal
{
	private:
		Brain	*bd;
    public:
        Dog();
        Dog(std::string str);
        Dog(Dog &A);
        void    makeSound(void) const;
        Dog  &operator=(const Dog &A);
        // std::string    getType(void) const;
        virtual ~Dog();
};

#endif