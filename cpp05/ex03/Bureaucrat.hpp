#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class   AForm;

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
        void    executeForm(AForm const & form);
        std::string     getName(void)const;
        int             getGrade(void)const;
        ~Bureaucrat();
};
std::ostream&   operator<<(std::ostream &os, const Bureaucrat& b2);

class BExceptionHigh : public std::exception
{
    public:
        virtual const char* what() const throw();
};
class BExceptionLow : public std::exception
{
    public:
        virtual const char* what() const throw();
};
class BExceptionIncr : public std::exception
{
    public:
        virtual const char* what() const throw();
};
class BExceptionDec : public std::exception
{
    public:
        virtual const char* what() const throw();
};
class BSignForm : public std::exception
{
    public:
        virtual const char* what() const throw();
};

#endif