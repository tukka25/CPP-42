#ifndef ARRAY_TPP
# define ARRAY_TPP

template <class T>
Array<T>::Array()
{
	std::cout << "Template Default Constructor" << std::endl;
	this->arr = NULL;
}

template <class T>
Array<T>::Array(int n)
{
        if (n <= 0)
                throw (std::runtime_error("Failed to Allocate"));
	std::cout << "Template Parameterized Constructor" << std::endl;
        this->arr = new T[n + 1];
        this->arr[n] = 0;
        this->len = n;
}

template <class T>
Array<T>::Array(const Array &n)
{
        std::cout << "Template Copy Constructor" << std::endl;
        this->arr = new T[n.size() + 1];
        for (int i = 0; i < n.size(); i++)
                this->arr[i] = n.arr[i];
        this->arr[n.size] = 0;
        this->len = n.size();
}

template <class T>
Array<T>&     Array<T>::operator=(const Array<T> &a)
{
        if (this != &a)
        {
                std::cout << "Copy Assignment Operator" << std::endl;
                if (!this->arr)
                        this->arr = new T[a.size()];
                for (int i = 0; i < a.size(); i++)
                        this->arr[i] = a.arr[i];
                this->arr[a.size] = 0;
                this->len = a.size();
        }
        return (*this);
}

template <class T>
void	Array<T>::PrintArr() const
{
        if (!this->arr)
                return ;
        for (int i = 0; i < this->size(); i++)
        {
                if (i == this->size() - 1)
                        std::cout << this->arr[i] << std::endl;
                else
                        std::cout << this->arr[i] << " " << "," << std::endl;
        }
}

template <class T>
T&    Array<T>::operator[](const int index)
{
        if (index < 0 || index >= len)
                throw (std::runtime_error("Out Of Bounds"));
	return (this->arr[index]);
}

template <class T>
const T&    Array<T>::operator[](const int index) const
{
        if (index < 0 || index >= len)
                throw (std::runtime_error("Out Of Bounds"));
	return (this->arr[index]);
}

template <class T>
int	Array<T>::size() const
{
        return (this->len);
}

template <class T>
Array<T>::~Array()
{
        delete[] this->arr;
	std::cout << "Template Parameterized Destructor" << std::endl;
}

#endif