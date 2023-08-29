#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <class T>
class Array
{
	private:
		T *arr;
		int	len;
	public:
		Array(int n);
		void	PrintArr() const;
		Array(const Array<T> &n);
		int	size() const;
		T&	operator[](const int index);
		Array<T>&	operator=(const Array<T> &a);
		const T&    operator[](const int index) const;
		Array();
		~Array();
};

#include "Array.tpp"

class OutOfBounds : public std::exception
{
        const char *what() const throw();
};

#endif 