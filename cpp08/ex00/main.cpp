# include "easyfind.hpp"

int main()
{
    std::vector<int> v;

    for (int i = 0; i <= 5; i++)
        v.push_back(i);
    for (int i = 0; i < (int)v.size(); i++)
    {
        std::cout << v.at(i) << std::endl;
    }
    easyfind<std::vector<int>, 2>(v, 2);
}