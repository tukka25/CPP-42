#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class Presidential
{
    private:
        int flag;
    public:
    Presidential();
    Presidential( std::string name);
    void    printAsciiTree(std::ofstream &outfile);
    ~Presidential();
};

#endif