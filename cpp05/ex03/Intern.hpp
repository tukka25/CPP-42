#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>

// class   AForm;
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern & i);
        AForm   *makeForm(std::string form, std::string target);
        Intern& operator=(const Intern& i);
        // Intern(int grade2);
        // void    increment(int amount);
        // void    decrement(int amount);
        // void    executeForm(AForm const & form);
        // Intern(std::string str, int grade);
        // std::string     getName(void)const;
        // int             getGrade(void)const;
        // void            executeForm(Form const & form);
        ~Intern();
};
// std::ostream&   operator<<(std::ostream &os, const Intern& b2);

#endif