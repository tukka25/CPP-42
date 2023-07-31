# include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(std::string str)
{
    (void)str;
    std::cout << "Dog Parameterized Constructor called" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << this->type << " barks🐕" << std::endl;
}

// std::string   Dog::getType(void) const
// {
//     return (this->type);
// }

Dog::Dog(Dog &A) : Animal(A)
{
    *this = A;
}

Dog  &Dog::operator=(const Dog &A)
{
    this->type = A.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
}