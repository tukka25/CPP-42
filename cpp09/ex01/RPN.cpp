# include "RPN.hpp"

Rpn::Rpn()
{
    std::cout << "Default Constructor Called" << std::endl;
}

void    Rpn::execution(char *argv)
{
    std::string s;
    int          g;
    int          g2;
    std::stringstream   ss;

    s = argv;
    if (s.find_first_not_of("0987654321 *+-/") != std::string::npos || s.empty())
        throw (WrongInput());
    ss << argv;
    while (getline(ss, s, ' '))
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
            st.push(this->doOperation(g2, g, s));
            std::cout << st.top() << std::endl;
        } 
    }
    if (st.size() >= 2)
        throw (WrongInput());
    std::cout << "Result => "  << st.top() << std::endl;
    
}

const char *WrongInput::what() const throw()
{
    return ("Error: Invalid Number");
}

int     Rpn::doOperation(int num1, int num2, std::string flag)
{
    if (flag == "-")
        return (num1 - num2);
    else if (flag == "+")
    {
        std::cout << "num = " << num1 << '\t' << "num2 = " << num2 << std::endl;
        return (num1 + num2);
    }
    else if (flag == "*")
        return (num1 * num2);
    else
        return (num1 / num2);
}

Rpn::~Rpn()
{
    std::cout << "Default Destructor Called" << std::endl;
}