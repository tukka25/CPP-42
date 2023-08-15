#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
    private:
        const std::string   formName;
        const int           gradeSign;
        const int           gradeExec;
        bool                sign;
    public:
        AForm();
        AForm(int grade1, int grade2);
        // void    increment(int amount);
        // void    decrement(int amount);
        // Form(std::string str, int grade);
        std::string    getformName() const;
        virtual void            signForm() const = 0;
        void            beSigned(Bureaucrat &b);
        bool           getSign() const;
        int            getgradeSign() const;
        int            getgradeExec() const;
        ~AForm();
};
std::ostream&   operator<<(std::ostream &os, const AForm& b2);


#endif