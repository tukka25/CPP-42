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
    Presidential(const Presidential & p);
    Presidential&  operator=(const Presidential &s);
    Presidential( std::string name);
    void    signForm() const;
    void    printMsg(std::string target);
    ~Presidential();
};

#endif