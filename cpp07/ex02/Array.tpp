#ifndef ARRAY_TPP
# define ARRAY_TPP

template <class T>
Array<T>::Array(T n)
{
        this->arr = new T[n];
        // for (int i = 0; i < n; i++)
        // {
                // T[0] = 0;
        // }
	std::cout << "Template Parameterized Constructor" << std::endl;
}

template <class T>
Array<T>::Array()
{
	this->arr = new T[1];
        this->arr[0] = 0;
	std::cout << "Template Default Constructor" << std::endl;
}

template <class T>
T&    Array<T>::operator[](const int index)
{
	return (this->arr[index]);
}


// template <class S, class T, class F> void Iter(S &a, T length, F function)
// {

//         for (int i = 0; i < length; i++)
//         {
//                 a[i] = function(a[i]);
//                 // std::cout << a[i] << std::endl;
//         }
// }

// template <class C> char Encryption(C c)
// {
//         int i = (int)c;

//         i = i + 2 - 4 + 9;
//         return (static_cast<char>(i));
// }

// template <class C> char Decryption(C c)
// {
//         int i = (int)c;

//         i = i - 2 + 4 - 9;
//         return (static_cast<char>(i));
// }

#endif