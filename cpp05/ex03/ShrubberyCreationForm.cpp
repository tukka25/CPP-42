#include "ShrubberyCreationForm.hpp"

Shrubbery::Shrubbery() : AForm("Shrubbery", 145, 137)
{
    std::string     tmp;
    std::cout << "Shrubbery Default Constructor Called" << std::endl;

    flag = 0;
    tmp = "_shrubbery";
    std::ofstream outfile(tmp.c_str());
    if (!outfile)
    {
        std::cout << "outfile error" << std::endl;
        flag = 1;
    }
    printAsciiTree(outfile);
}

Shrubbery::Shrubbery(std::string name) : AForm(name, 145, 137)
{
    std::string     tmp;
    std::cout << "Shrubbery Parametrized Constructor Called" << std::endl;

    tmp = name + "_shrubbery";
    flag = 0;
    std::ofstream outfile(tmp.c_str());
    if (!outfile)
    {
        std::cout << "outfile error" << std::endl;
        flag = 1;
    }
    printAsciiTree(outfile);
}

void    Shrubbery::signForm() const
{
    if (this->getSign())
        throw (42);
    throw (410);
}

void    Shrubbery::printAsciiTree(std::ofstream &outfile)
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
}

Shrubbery::~Shrubbery()
{
    std::cout << "Shrubbery Destructor Called" << std::endl;
}