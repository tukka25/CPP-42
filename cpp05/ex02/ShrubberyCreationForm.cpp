#include "ShrubberyCreationForm.hpp"

Shrubbery::Shrubbery() : AForm("Shrubbery", 145, 137)
{
    // std::string     tmp;
    std::cout << "Shrubbery Default Constructor Called" << std::endl;

    // flag = 0;
    // tmp = "Shrubbery_shrubbery";
    // std::ofstream outfile(tmp.c_str());
    // if (!outfile)
    // {
    //     std::cout << "outfile error" << std::endl;
    //     flag = 1;
    // }
    // printAsciiTree(outfile);
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

Shrubbery::Shrubbery(const Shrubbery & s) : AForm(s.getFormName(), s.getGradeSign(), s.getGradeExec())
{
    std::string     tmp;
    std::cout << "Shrubbery Parametrized Constructor Called" << std::endl;

    // std::cout  << std::endl << "in = " << this->getFormName() << std::endl << std::endl;
    tmp = this->getFormName() + "_shrubbery";
    flag = 0;
    std::ofstream outfile(tmp.c_str());
    if (!outfile)
    {
        std::cout << "outfile error" << std::endl;
        flag = 1;
    }
    printAsciiTree(outfile);
}

Shrubbery&  Shrubbery::operator=(const Shrubbery &s)
{
    AForm::operator=(s);
    return *this;
}

void    Shrubbery::signForm() const
{
    if (this->getSign())
        std::cout << " signed " << this->getFormName() << std::endl;
    else
        throw (BSignForm());
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
