#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
// #include "Animal.hpp"

class Brain
{
    private:
        std::string *ideas;
    public:
        Brain();
        // Brain(std::string str);
		std::string getIdeas(void) const;
        Brain(Brain &A);
        Brain  &operator=(const Brain &A);;
        ~Brain();
};

#endif