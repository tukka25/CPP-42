#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class Robot : public AForm
{
    private:
        int flag;
    public:
    Robot();
    Robot( std::string name);
    void    signForm() const;
    void    makeNoises(std::string name) const;
    ~Robot();
};

#endif