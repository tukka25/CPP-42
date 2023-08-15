#include "PresidentialPardonForm.hpp"

Presidential::Presidential()
{
    std::cout << "Presidential Default Constructor Called" << std::endl;
    flag = 0;
}

Presidential::Presidential(std::string name)
{
    std::string     tmp;
    std::cout << "Presidential Parametrized Constructor Called" << std::endl;

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

void    Presidential::printAsciiTree(std::ofstream &outfile)
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

Presidential::~Presidential()
{
    std::cout << "Presidential Destructor Called" << std::endl;

}
