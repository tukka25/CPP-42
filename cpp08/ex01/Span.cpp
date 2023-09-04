# include "easyfind.hpp"

EFind::EFind()
{
    std::cout << "Default Contructor Called" << std::endl;
}

const char *Error::what() const throw ()
{
    return ("Element Not Found");
}

EFind::~EFind()
{
    std::cout << "Default Destructor Called" << std::endl;
}
