# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string str) : type(str)
{
    std::cout << "WrongAnimal Parameterized Constructor called" << std::endl;
}

std::string   WrongAnimal::getType(void) const
{
    return (this->type);
}

WrongAnimal::WrongAnimal(WrongAnimal &A)
{
    *this = A;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal don't have a specific sound" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &A)
{
    this->type = A.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor" << std::endl;
}