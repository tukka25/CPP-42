#include "AForm.hpp"

AForm::AForm() :formName("tForm"), gradeSign(10), gradeExec(10)
{
    this->sign = false;
    std::cout << "Form Default Constructor Called" << std::endl;
}

AForm::AForm(int grade1, int grade2) :formName("tForm"), gradeSign(grade1), gradeExec(grade2)
{
    // if ((grade2 < 0 || grade2 > 150) || (grade1 < 0 || grade1 > 150))
    //     throw (1);
    this->sign = false;
    std::cout << "AForm Default Constructor Called" << std::endl;
}

void    AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->gradeSign)
        throw (405);
    this->sign = true;
}  

void    AForm::signForm() const
{
    if (this->sign)
        throw (42);
    throw (410);
}

std::string    AForm::getformName() const
{
    return (this->formName);
}

bool    AForm::getSign() const
{
    return (this->sign);
}

std::ostream& operator<<(std::ostream &os, const AForm& b2)
{
    os << b2.getformName() << " bureaucrat , execGrade = " << b2.getgradeExec()
    << ", gradeSign = " << b2.getgradeSign() << " , Sign status = " << b2.getSign();
    return (os);
}

int AForm::getgradeSign() const
{
    return (this->gradeSign);
}

int AForm::getgradeExec() const
{
    return (this->gradeExec);
}

AForm::~AForm()
{
    std::cout << "Form Destructor Called" << std::endl;
}