#include "RobotomyRequestForm.hpp"

Robot::Robot() : AForm("Robot", 72, 45)
{
    std::cout << "Robot Default Constructor Called" << std::endl;
    flag = 0;
    this->makeNoises("Robot");
}

Robot::Robot(std::string name) : AForm(name, 72, 45)
{
    std::cout << "Robot Parametrized Constructor Called" << std::endl;
    flag = 0;
    this->makeNoises(name);
}

Robot::Robot(const Robot &r) : AForm(r.getFormName(), r.getGradeSign(), r.getGradeExec())
{
    std::cout << "Robot Copy Constructor Called" << std::endl;
    flag = 0;
    this->makeNoises(r.getFormName());
}

Robot&  Robot::operator=(const Robot &s)
{
    AForm::operator=(s);
    return *this;
}


void    Robot::signForm() const
{
    if (this->getSign())
        std::cout << " signed " << this->getFormName() << std::endl;
    else
        throw (BSignForm());
}

void    Robot::makeNoises(std::string name) const
{
    std::cout << "Drill noise: DZZZZZZZZZZZZZZZZZZZZZZ~~~" << std::endl;
    std::cout << name << " has been robotomized successfully 50% of the time" << std::endl;
}

Robot::~Robot()
{
    std::cout << "Robot Destructor Called" << std::endl;
}
