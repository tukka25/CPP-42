#include "Form.hpp"

Form::Form() :formName("tForm"), gradeSign(10), gradeExec(10)
{
    this->sign = false;
    std::cout << "Form Default Constructor Called" << std::endl;
}

Form::Form(int grade1, int grade2) :formName("tForm"), gradeSign(grade1), gradeExec(grade2)
{
    // if ((grade2 < 0 || grade2 > 150) || (grade1 < 0 || grade1 > 150))
    //     throw (1);
    this->sign = false;
    std::cout << "Form Default Constructor Called" << std::endl;
}

Form::Form(const Form & f) : formName(f.formName), gradeSign(f.gradeSign), gradeExec(f.gradeExec)
{
    this->sign = false;
}

Form&   Form::operator=(const Form &f)
{
    // this->formName = f.getformName();
    // if ()
    return (*this);
}

// void    setformName(std::string str)
// {
//     this->formName = str;
// }

void    Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->gradeSign)
        throw (405);
    this->sign = true;
}  

void    Form::signForm() const
{
    if (this->sign)
        throw (42);
    throw (410);
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