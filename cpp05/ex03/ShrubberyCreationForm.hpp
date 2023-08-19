#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class Shrubbery : public AForm
{
    private:
        int flag;
    public:
    Shrubbery();
    Shrubbery( std::string name);
    Shrubbery( const Shrubbery & s);
    Shrubbery&  operator=(const Shrubbery &s);
    void    signForm() const;
    void    printAsciiTree(std::ofstream &outfile);
    ~Shrubbery();
};

#endif