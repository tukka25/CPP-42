#include "AForm.hpp"

AForm::AForm() :formName("tForm"), gradeSign(10), gradeExec(10)
{
    this->sign = false;
    std::cout << "Form Default Constructor Called" << std::endl;
}

AForm::AForm(int grade1, int grade2) :formName("tform"), gradeSign(grade1), gradeExec(grade2)
{
    if (grade1 < 0 || grade2 < 0)
        throw (BFormHigh());
    if (grade1 > 150 || grade2 > 150)
        throw (BFormLow());
    this->sign = false;
    std::cout << "AForm Default Constructor Called" << std::endl;
}

AForm::AForm(const AForm &f) :formName(f.formName), gradeSign(f.gradeSign), gradeExec(f.gradeExec)
{
    if (f.gradeSign < 0 || f.gradeExec < 0)
        throw(BFormHigh());
    if (f.gradeSign > 150 || f.gradeExec > 150)
        throw (BFormLow());
    this->sign = false;
    std::cout << "AForm Default Constructor Called" << std::endl;
}

AForm&   AForm::operator=(const AForm &f)
{
    *const_cast<std::string *> (&this->formName) = f.formName;
    *const_cast<int *> (&this->gradeSign) = f.gradeSign;
    *const_cast<int *> (&this->gradeExec) = f.gradeExec;
    this->sign = false;
    return (*this);
}

AForm::AForm(std::string name, int grade1, int grade2) :formName(name), gradeSign(grade1), gradeExec(grade2)
{
    if (grade1 < 0 || grade2 < 0)
        throw(BFormHigh());
    if (grade1 > 150 || grade2 > 150)
        throw (BFormLow());
    this->sign = false;
    std::cout << "AForm Default Constructor Called" << std::endl;
}

void    AForm::execute(const Bureaucrat & executor) const
{
    if (this->getSign() && executor.getGrade() <= this->getGradeExec())
        std::cout << executor.getName() << " executed " << this->getFormName() << std::endl;
    else
        throw(BExcuted());
}

void    AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->gradeSign)
        throw (BBesigned());
    this->sign = true;
}  

void    AForm::signForm() const
{
   if (this->sign)
        std::cout << " signed " << this->formName << std::endl;
    else
        throw (BSignForm());
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

const char* BExcuted::what() const throw()
{
    return ("AForm::CantExecute");
}

const char* BFormIncr::what() const throw()
{
    return ("Form::IncrementError");
}

const char* BFormDec::what() const throw()
{
    return ("Form::DecrementError");
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