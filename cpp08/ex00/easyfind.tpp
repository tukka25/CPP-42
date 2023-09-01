#ifndef EASYFINF_TPP
# define EASYFINF_TPP

template <typename T, typename I> void  easyfind(T a, I n)
{
    for (int i = 0; i < (int)a.size(); i++)
    {
        if (n == a.at(i))
        {
            std::cout << "Found at index: " << i << " Value is: " << n << std::endl;
            return ;
        }
    }
    std::cout << "Not Found" << std::endl;
}


#endif