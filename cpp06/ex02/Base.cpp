# include "Base.hpp"
# include "AClass.hpp"
# include "BClass.hpp"
# include "CClass.hpp"
#include <cstdlib>

Base*   Base::generate(void)
{
    std::string s;
    std::stringstream add;
    char *end;
    Base  *a;

    add << &end;
    s = add.str();
    std::cout << s << std::endl;
    long int uniq = strtol(s.c_str(), &end, 16) / 1000000;
    std::cout << uniq << std::endl;
    if (uniq % 5 == 0)
    {
        std::cout << "a" << std::endl;
        a = new AClass;
    }
    else if (uniq % 4 == 0)
    {
        std::cout << "b" << std::endl;
        a = new BClass;
    }
    else
    {
        std::cout << "c" << std::endl;
        a = new CClass;
    }
    return(a);
}

void Base::identify(Base* p)
{
    AClass *a = dynamic_cast<AClass *>(p);
    BClass *b = dynamic_cast<BClass *>(p);
    CClass *c = dynamic_cast<CClass *>(p);

    if (a)
        std::cout << "A was Created" << std::endl;
    if (b)
        std::cout << "B was Created" << std::endl;
    if (c)
        std::cout << "C was Created" << std::endl;
}

void Base::identify(Base& p)
{
    try
    {
        AClass &a = dynamic_cast<AClass &>(p);
        (void)a;
        std::cout << "A was Created" << std::endl;
    }
    catch (std::exception &e)
    {
        try
        {
            BClass &b = dynamic_cast<BClass &>(p);
            (void)b;
            std::cout << "B was Created" << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << "C was Created" << std::endl;
        }
    }
}

Base::~Base()
{
    std::cout << "Base Default Destructor" << std::endl;
}