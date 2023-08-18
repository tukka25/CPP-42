#include "AForm.hpp"

AForm::AForm() :formName("tForm"), gradeSign(10), gradeExec(10)
{
    this->sign = false;
    std::cout << "Form Default Constructor Called" << std::endl;
}

AForm::AForm(int grade1, int grade2) :formName("tform"), gradeSign(grade1), gradeExec(grade2)
{
    // if ((grade2 < 0 || grade2 > 150) || (grade1 < 0 || grade1 > 150))
    //     throw (1);
    this->sign = false;
    std::cout << "AForm Default Constructor Called" << std::endl;
}

AForm::AForm(std::string name, int grade1, int grade2) :formName(name), gradeSign(grade1), gradeExec(grade2)
{
    // if ((grade2 < 0 || grade2 > 150) || (grade1 < 0 || grade1 > 150))
    //     throw (1);
    this->sign = false;
    std::cout << "AForm Default Constructor Called" << std::endl;
}

void    AForm::execute(const Bureaucrat & executor) const
{
    if (this->getSign() && executor.getGrade() <= this->getGradeExec())
        throw(101);
    throw(413);
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

std::string    AForm::getFormName() const
{
    return (this->formName);
}

bool    AForm::getSign() const
{
    return (this->sign);
}

std::ostream& operator<<(std::ostream &os, const AForm& b2)
{
    os << b2.getFormName() << " bureaucrat , execGrade = " << b2.getGradeExec()
    << ", gradeSign = " << b2.getGradeSign() << " , Sign status = " << b2.getSign();
    return (os);
}

int AForm::getGradeSign() const
{
    return (this->gradeSign);
}

int AForm::getGradeExec() const
{
    return (this->gradeExec);
}

AForm::~AForm()
{
    std::cout << "Form Destructor Called" << std::endl;
}