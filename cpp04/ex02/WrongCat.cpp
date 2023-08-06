# include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default Constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(std::string str)
{
    (void)str;
    std::cout << "WrongCat Parameterized Constructor called" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << this->type << " Meow🐈" << std::endl;
}

// std::string   WrongCat::getType(void) const
// {
//     return (this->type);
// }

WrongCat::WrongCat(WrongCat &A) : WrongAnimal(A)
{
    *this = A;
}

WrongCat  &WrongCat::operator=(const WrongCat &A)
{
    this->type = A.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor" << std::endl;
}