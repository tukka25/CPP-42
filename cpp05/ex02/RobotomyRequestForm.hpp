#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class Robot : public AForm
{
    public:
    Robot();
    Robot(std::string name);
    Robot(const Robot &r);
    Robot&  operator=(const Robot &s);
    void    signForm() const;
    void    makeNoises(std::string name) const;
    ~Robot();
};

#endif