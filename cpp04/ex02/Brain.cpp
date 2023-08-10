#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor called" << std::endl;
    ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        ideas[i] = "Bone";
}

Brain::Brain(Brain &A)
{
    this->ideas = new std::string[100]; 
    for (int i = 0; i < 100; i++)
        this->ideas[i] = A.ideas[i];
}

std::string Brain::getIdeas(void) const
{
    std::cout << "ideas = " << ideas[0] << std::endl;
    return (ideas[0]);
}

Brain &Brain::operator=(const Brain &A)
{
    if (this != &A)
    {
        delete []this->ideas;
        this->ideas = new std::string[100]; 
        for (int i = 0; i < 100; i++)
            this->ideas[i] = A.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    delete[] ideas;
    std::cout << "Brain Destructor" << std::endl;
}