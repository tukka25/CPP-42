#include "AClass.hpp"
#include "CClass.hpp"
#include "BClass.hpp"
#include "Base.hpp"

int main()
{
    Base *b = Base::generate();
    Base::identify(b);
    Base::identify(*b);
    delete b;
}