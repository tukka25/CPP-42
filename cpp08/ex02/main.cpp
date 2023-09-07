#include "MutantStack.hpp"

int main()
{
    std::stack<int> s;
    // MutantStack<int> m;
    // s.push(21);
    // s.push(22);
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    s.push(5);
    s.push(17);
    std::cout << "m = " << mstack.top() << std::endl;
    std::cout << s.top() << std::endl;
    mstack.pop();
    std::cout << "top of m = " << mstack.top() << std::endl;
    std::cout << "m = " << mstack.size() << std::endl;
    s.pop();
    std::cout << s.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
}