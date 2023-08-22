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
        Form(const Form& f);
        Form(int grade1, int grade2);
        std::string    getformName() const;
        void            signForm() const;
        Form&           operator=(const Form & f);
        void            beSigned(Bureaucrat &b);
        bool           getSign() const;
        int            getgradeSign() const;
        int            getgradeExec() const;
        ~Form();
};
std::ostream&   operator<<(std::ostream &os, const Form& b2);

class BFormHigh : public std::exception
{
    public:
        virtual const char* what() const throw();
};
class BFormLow : public std::exception
{
    public:
        virtual const char* what() const throw();
};
class BFormIncr : public std::exception
{
    public:
        virtual const char* what() const throw();
};
class BFormDec : public std::exception
{
    public:
        virtual const char* what() const throw();
};
class BBesigned : public std::exception
{
    public:
        virtual const char* what() const throw();
};
#endif