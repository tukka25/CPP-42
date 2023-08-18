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

void    Robot::signForm() const
{
    if (this->getSign())
        throw (42);
    throw (410);
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
