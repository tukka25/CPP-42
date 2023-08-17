#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class Presidential : public AForm
{
    private:
        int flag;
    public:
    Presidential();
    Presidential( std::string name);
    void    signForm() const;
    void    printAsciiTree(std::ofstream &outfile);
    ~Presidential();
};

#endif