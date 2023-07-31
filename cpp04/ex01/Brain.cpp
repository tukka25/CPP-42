#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(Brain &A)
{
    *this = A;
}

Brain  &Brain::operator=(const Brain &A)
{
    this->ideas = A.ideas;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor" << std::endl;
}