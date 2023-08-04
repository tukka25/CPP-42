#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor called" << std::endl;
	ideas = new std::string [100];
	ideas[0] = "Bone";
}

Brain::Brain(Brain &A)
{
    *this = A;
}

std::string	Brain::getIdeas(void) const
{
	std::cout << "ideas = " << ideas[0] << std::endl;
	return (ideas[0]);
}

Brain  &Brain::operator=(const Brain &A)
{
    // this->ideas = A.ideas;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = A.ideas[i];
    }
    // (void)A;
    return (*this);
}

Brain::~Brain()
{
    delete [] ideas;
    std::cout << "Brain Destructor" << std::endl;
}