#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
# include "AForm.hpp"

class Bureaucrat
{
    private:
        const std::string   name;
        int                 grade;
    public:
        Bureaucrat();
        Bureaucrat(int grade2);
        void    increment(int amount);
        void    decrement(int amount);
        // Bureaucrat(std::string str, int grade);
        std::string     getName(void)const;
        int             getGrade(void)const;
        void            executeForm(Form const & form);
        ~Bureaucrat();
};
std::ostream&   operator<<(std::ostream &os, const Bureaucrat& b2);


#endif