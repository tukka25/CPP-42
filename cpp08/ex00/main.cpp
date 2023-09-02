# include "easyfind.hpp"

int main()
{
    EFind    e;
    std::vector<int> v;
    // std::array<int, 5> arr;

    for (int i = 2; i <= 5; i++)
        v.push_back(i);
    std::cout << v.size() << std::endl<< std::endl;
    for (int i = 0; i < (int)v.size(); i++)
    {
        std::cout << v.at(i) << std::endl;
    }
    easyfind<std::vector<int>, 7>(v, 7);
    // std::cout << *v.begin() << std::endl;
    // for (const int &i : v)
    // {
    //     std::cout << i << std::endl;
    // }
}