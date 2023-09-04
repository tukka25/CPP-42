#include "Span.hpp"

int main()
{
    try
    {
        Span s(5);
        (void)s;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}