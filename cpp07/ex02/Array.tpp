#ifndef ARRAY_TPP
# define ARRAY_TPP

template <class T>
Array<T>::Array(T n)
{
	std::cout << "Template Parameterized Constructor" << std::endl;
        this->arr = new T[n];
        for (int i = 0; i < n; i++)
        {
                arr[i] = T();
        }
        std::cout << arr[0] << std::endl;
        std::cout << this->size() << std::endl;
}

// template <class T>
// Array<T>::Array(const T &n)
// {
//         this->arr = new T[n];
// }

// template <class T>
// T&	Array<T>::Array(const T &n)
// {
//         // if (this != &n)
//         // {

//         // }
//         return (*this);
// }

template <class T>
Array<T>::Array()
{
	this->arr = new T[1];
        this->arr[0] = 100;
	std::cout << "Template Default Constructor" << std::endl;
}

template <class T>
T&    Array<T>::operator[](const int index) const
{
	return (this->arr[index]);
}

template <class T>
int	Array<T>::size() const
{
        int i = 0;
        if (!arr)
                return (0);
        while (arr[i])
                i++;
        std::cout << "i = " << i << std::endl; 
        return (i);
}

#endif