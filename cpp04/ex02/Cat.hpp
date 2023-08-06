#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: virtual public Animal
{
    private:
        Brain	*bc;	
    public:
        Cat();
        Cat(std::string str);
        Cat(Cat &A);
        void    makeSound(void) const; //good reason to put virtual
        Cat  &operator=(const Cat &A);
        // std::string    getType(void) const;
        virtual ~Cat();
};

#endif