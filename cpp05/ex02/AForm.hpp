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
        AForm(std::string name, int grade1, int grade2);
        AForm(const AForm &f);
        std::string    getFormName() const;
        AForm&           operator=(const AForm & f);
        virtual void    signForm() const = 0;
        void            beSigned(Bureaucrat &b);
        bool           getSign() const;
        int            getGradeSign() const;
        void            execute(const Bureaucrat & executor) const;
        int            getGradeExec() const;
        ~AForm();
};
std::ostream&   operator<<(std::ostream &os, const AForm& b2);


#endif