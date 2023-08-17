#include "RobotomyRequestForm.hpp"

Robot::Robot() : AForm("Robot", 72, 45)
{
    // std::string     tmp;
    std::cout << "Robot Default Constructor Called" << std::endl;

    flag = 0;
    // tmp = "_Robot";
    // std::ofstream outfile(tmp.c_str());
    // if (!outfile)
    // {
    //     std::cout << "outfile error" << std::endl;
    //     flag = 1;
    // }
    // printAsciiTree(outfile);
}

Robot::Robot(std::string name) : AForm(name, 72, 45)
{
    // std::string     tmp;
    std::cout << "Robot Parametrized Constructor Called" << std::endl;

    // tmp = name + "_Robot";
    flag = 0;
    // std::ofstream outfile(tmp.c_str());
    // if (!outfile)
    // {
    //     std::cout << "outfile error" << std::endl;
    //     flag = 1;
    // }
    // printAsciiTree(outfile);
}

void    Robot::signForm() const
{
    if (this->getSign())
        throw (42);
    throw (410);
}

void    Robot::printAsciiTree(std::ofstream &outfile)
{
    outfile << "       _-_" << std::endl;
    outfile << "    /~~   ~~\\" << std::endl;
    outfile << " /~~         ~~\\" << std::endl;
    outfile << "{               }" << std::endl;
    outfile << " \\  _-     -_  /" << std::endl;
    outfile << "   ~  \\\\ //  ~" << std::endl;
    outfile << "_- -   | | _- _ " << std::endl;
    outfile << "  _ -  | |   -_" << std::endl;
    outfile << "      // \\\\" << std::endl;
    // outfile << "";
}

Robot::~Robot()
{
    std::cout << "Robot Destructor Called" << std::endl;
}
