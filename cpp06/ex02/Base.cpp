# include "Base.hpp"
# include "AClass.hpp"

Base::Base()
{
    std::cout << "Base Default Constructor" << std::endl;
}

Base*   Base::generate(void)
{
    AClass  *a = new AClass;
    return(a);
}

void Base::identify(Base* p)
{
    (void)p;
    const std::type_info &t = typeid(p);
    std::cout << "Name : " << t.name() << std::endl;
}

Base::~Base()
{
    std::cout << "Base Default Destructor" << std::endl;
}