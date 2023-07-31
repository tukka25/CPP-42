# include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor called" << std::endl;
    this->type = "";
}

Animal::Animal(std::string str) : type(str)
{
    std::cout << "Animal Parameterized Constructor called" << std::endl;
}

std::string   Animal::getType(void) const
{
    return (this->type);
}

Animal::Animal(Animal &A)
{
    *this = A;
}

void    Animal::makeSound(void) const
{
    std::cout << "Animal don't have a specific sound" << std::endl;
}

Animal  &Animal::operator=(const Animal &A)
{
    this->type = A.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor" << std::endl;
}