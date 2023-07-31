# include "WrongDog.hpp"

WrongDog::WrongDog()
{
    std::cout << "WrongDog Default Constructor called" << std::endl;
    this->type = "WrongDog";
}

WrongDog::WrongDog(std::string str)
{
    (void)str;
    std::cout << "WrongDog Parameterized Constructor called" << std::endl;
}

void    WrongDog::makeSound(void) const
{
    std::cout << this->type << " barks🐕" << std::endl;
}

// std::string   WrongDog::getType(void) const
// {
//     return (this->type);
// }

WrongDog::WrongDog(WrongDog &A) : WrongAnimal(A)
{
    *this = A;
}

WrongDog  &WrongDog::operator=(const WrongDog &A)
{
    this->type = A.type;
    return (*this);
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog Destructor" << std::endl;
    // delete this;
}