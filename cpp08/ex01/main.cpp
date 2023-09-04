# include "easyfind.hpp"

int main()
{
    EFind    e;
    // list    l;
    // struct list *b = NULL;
    // struct list *c = NULL;
    // struct list *d = NULL;
    
    // b = new struct list;
    // c = new struct list;
    // d = new struct list;
    // b->content = 1;
    // c->content = 2;
    // d->content = 3;
    // b->next = c;
    // c->next = d;
    // d->prev = c;
    // d->next = NULL;
    // std::cout << "list" << std::endl;
    // while (b)
    // {
    //     std::cout << b->content << std::endl;
    //     b = b->next;
    // }
    // std::cout << "list done" << std::endl;
    // b->content = 2;
    std::vector<int> v;

    for (int i = 0; i <= 5; i++)
        v.push_back(i);
    // std::cout << "array" << std::endl;
    // for (int i = 0; a[i];i++)
    //     std::cout << a[i] << std::endl;
    // std::cout << "array is done" << std::endl;
    // std::cout << v.size() << std::endl<< std::endl;
    for (int i = 0; i < (int)v.size(); i++)
    {
        std::cout << v.at(i) << std::endl;
    }
    easyfind<std::vector<int>, 7>(v, 7);
    // easyfind<std::array<int, 5>, 3>(a, 3);
    // easyfind<std::array<int>, 7>(v, 7);
    // std::cout << *v.begin() << std::endl;
    // for (const int &i : v)
    // {
    //     std::cout << i << std::endl;
    // }
}