#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
        std::string type;
    public:
        Animal();
        virtual void    makeSound(void) const = 0;
        Animal(std::string str);
        Animal(Animal &A);
        Animal  &operator=(const Animal &A);
        std::string    getType(void) const;
        virtual ~Animal();
};

#endif