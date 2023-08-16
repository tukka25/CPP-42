#ifndef Form_HPP
#define Form_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string   formName;
        const int           gradeSign;
        const int           gradeExec;
        bool                sign;
    public:
        Form();
        Form(Form& F);
        
        Form(int grade1, int grade2);
        // void    increment(int amount);
        // void    decrement(int amount);
        // Form(std::string str, int grade);
        std::string    getformName() const;
        void            signForm() const;
        void            beSigned(Bureaucrat &b);
        bool           getSign() const;
        int            getgradeSign() const;
        int            getgradeExec() const;
        ~Form();
};
std::ostream&   operator<<(std::ostream &os, const Form& b2);


#endif