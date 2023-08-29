#ifndef ARRAY_TPP
# define ARRAY_TPP

template <class T>
Array<T>::Array(int n)
{
        if (n <= 0)
                throw (std::runtime_error("shit"));
	std::cout << "Template Parameterized Constructor" << std::endl;
        this->arr = new T[n];
        this->len = n;
}

template <class T>
Array<T>::Array(const Array &n)
{
        std::cout << "copy constructor" << std::endl;
        this->arr = new T[n.size()];
        std::cout << "Size = " << n.size() << std::endl;
        for (int i = 0; i < n.size(); i++)
        {
                this->arr[i] = n.arr[i];
                // len = i;
                // std::cout << this->arr[i] << std::endl;
        }
        len = n.size();
}

template <class T>
void	Array<T>::PrintArr() const
{
        for (int i = 0; i < this->size(); i++)
        {
                if (i == this->size() - 1)
                        std::cout << this->arr[i] << std::endl;
                else
                        std::cout << this->arr[i] << " " << "," << std::endl;
        }
}
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
	std::cout << "Template Default Constructor" << std::endl;
	this->arr = NULL;
}

template <class T>
T&    Array<T>::operator[](const int index)
{
        if (index < 0 || index >= len)
                throw (std::runtime_error("shit"));
	return (this->arr[index]);
}

// template <class E>
// const char *OutOfBounds<E>::what() const throw()
// {
//     return ("Out Of Bounds");
// }

template <class T>
const T&    Array<T>::operator[](const int index) const
{
        if (index < 0 || index >= len)
                throw (std::runtime_error("shit"));
	return (this->arr[index]);
}

template <class T>
int	Array<T>::size() const
{
        // int i = 0;
        // if (!arr)
        //         return (0);
        // while (arr[i])
        //         i++;
        return (this->len);
}

#endif