# include "RPN.hpp"

Rpn::Rpn()
{
    std::cout << "Default Constructor Called" << std::endl;
}

void    Rpn::execution(char *argv)
{
    // int         f = 0;
    std::string s;
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
        if (s.find_first_not_of("0987654321") == std::string::npos)
            st.push(std::atoi(s.c_str()));
        if (st.size() >= 2 && s.find_first_of("+-/*") != std::string::npos)
        {
            g = st.top();
            st.pop();
            g2 = st.top();
            st.pop();
            st.push(this->doOperation(g2, g, (int)s[0]));
            std::cout << "top = " <<  st.top() << std::endl;
        }
        // f++;
    }
    // std::cout << "f =" << f << std::endl;
    // std::cout << "s = " << s << std::endl;
    if (st.size() >= 2 || st.size() == 0)
    {
        // std::cout << "fuck" << std::endl;
        throw (WrongInput());
    }
    std::cout << "Result => "  << st.top() << std::endl;
    
}

const char *WrongInput::what() const throw()
{
    return ("Error: Invalid Number");
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
    std::cout << "Default Destructor Called" << std::endl;
}