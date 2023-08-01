# include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor called" << std::endl;
    this->type = "Cat";
	this->bc = new Brain;
	bc->getIdeas();
}

Cat::Cat(std::string str)
{
    (void)str;
    std::cout << "Cat Parameterized Constructor called" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << this->type << " Meow🐈" << std::endl;
}

// std::string   Cat::getType(void) const
// {
//     return (this->type);
// }

Cat::Cat(Cat &A) : Animal(A)
{
    *this = A;
}

Cat  &Cat::operator=(const Cat &A)
{
    this->type = A.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor" << std::endl;
}