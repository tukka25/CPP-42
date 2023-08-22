#include "Form.hpp"

Form::Form() :formName("tForm"), gradeSign(10), gradeExec(10)
{
    this->sign = false;
    std::cout << "Form Default Constructor Called" << std::endl;
}

Form::Form(int grade1, int grade2) :formName("tForm"), gradeSign(grade1), gradeExec(grade2)
{
    // if (grade1 < 0 || grade2 < 0)
    //     throw(BFormHigh());
    // if (grade1 > 150 || grade2 > 150)
    //     throw (BFormLow());
    this->sign = false;
    std::cout << "Form Default Constructor Called" << std::endl;
}

Form::Form(const Form & f) : formName(f.formName), gradeSign(f.gradeSign), gradeExec(f.gradeExec)
{
    this->sign = false;
}

Form&   Form::operator=(const Form &f)
{
    *const_cast<std::string *> (&this->formName) = f.formName;
    *const_cast<int *> (&this->gradeSign) = f.gradeSign;
    *const_cast<int *> (&this->gradeExec) = f.gradeExec;
    this->sign = false;
    return (*this);
}

void    Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->gradeSign)
        throw (BBesigned());
    this->sign = true;
}  

void    Form::signForm() const
{
    if (this->sign)
        std::cout << " signed " << this->formName << std::endl;
    else
        throw (BSignForm());
}

std::string    Form::getformName() const
{
    return (this->formName);
}

bool    Form::getSign() const
{
    return (this->sign);
}

std::ostream& operator<<(std::ostream &os, const Form& b2)
{
    os << b2.getformName() << " bureaucrat , execGrade = " << b2.getgradeExec()
    << ", gradeSign = " << b2.getgradeSign() << " , Sign status = " << b2.getSign();
    return (os);
}

const char* BFormHigh::what() const throw()
{
    return ("Form::GradeTooHighException");
}

const char* BFormLow::what() const throw()
{
    return ("Form::GradeTooLowException");
}

const char* BBesigned::what() const throw()
{
    return ("Form::GradeTooLowToSign");
}

const char* BFormIncr::what() const throw()
{
    return ("Form::IncrementError");
}

const char* BFormDec::what() const throw()
{
    return ("Form::DecrementError");
}

int Form::getgradeSign() const
{
    return (this->gradeSign);
}

int Form::getgradeExec() const
{
    return (this->gradeExec);
}

Form::~Form()
{
    std::cout << "Form Destructor Called" << std::endl;
}