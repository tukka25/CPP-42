#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
        std::string type;
    public:
        WrongAnimal();
        void    makeSound(void) const;
        WrongAnimal(std::string str);
        WrongAnimal(WrongAnimal &A);
        WrongAnimal  &operator=(const WrongAnimal &A);
        std::string    getType(void) const;
        ~WrongAnimal();
};

#endif