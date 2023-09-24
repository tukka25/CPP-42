# include "RPN.hpp"

Rpn::Rpn()
{
    // std::cout << "Default Constructor Called" << std::endl;
}

Rpn::Rpn(const Rpn &r)
{
    if (this != &r)
    {
        this->st = r.st;
    }
}

Rpn&    Rpn::operator=(const Rpn &r)
{
    if (this != &r)
    {
        this->st = r.st;
    }
    return (*this);
}

void    Rpn::execution(char *argv)
{
    std::string s;
    std::string before;
    int          g;
    int          g2;
    std::stringstream   ss;

    s = argv;
    if (s.find_first_not_of("0987654321 *+-/") != std::string::npos || s.empty())
        throw (WrongInput());
    ss << argv;
    while (ss >> s)
    {
        if (s.size() > 1)
            throw (WrongInput());
        before = s;
        if (s.find_first_not_of("0987654321") == std::string::npos)
            st.push(std::atoi(s.c_str()));
        if (before.find_first_of("+-/*") != std::string::npos && s.find_first_of("+-/*") != std::string::npos && st.size() < 2)
            throw (WrongFormat());
        if (st.size() >= 2 && s.find_first_of("+-/*") != std::string::npos)
        {
            g = st.top();
            st.pop();
            g2 = st.top();
            st.pop();
            st.push(this->doOperation(g2, g, (int)s[0]));
        }
    }
    if (st.size() >= 2 || st.size() == 0 || s.find_first_not_of("0987654321") == std::string::npos)
        throw (WrongInput());
    std::cout << "Result => "  << st.top() << std::endl;
    
}

const char *WrongInput::what() const throw()
{
    return ("Error: Invalid Number");
}

const char *WrongFormat::what() const throw()
{
    return ("Error: WrongFormat");
}

int     Rpn::doOperation(int num1, int num2, int flag)
{
    switch (flag)
    {
        case plus:
        {
            return (num1 + num2);
            break;
        }
        case minus:
        {
            return (num1 - num2);
            break;
        }
        case mult:
        {
            return (num1 * num2);
            break;
        }
        case divi:
        {
            return (num1 / num2);
            break;
        }
    }
    return (0);
}

Rpn::~Rpn()
{
    // std::cout << "Default Destructor Called" << std::endl;
}