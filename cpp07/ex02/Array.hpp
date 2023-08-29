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
		const T&    operator[](const int index) const;
		Array();
		// ~Array();
};

#include "Array.tpp"

// template <class S, class T, class F> void Iter(S &a, T length, F function);

// template <class C> char Encryption(C c);
// template <class C> char Decryption(C c);
// template <class E>
class OutOfBounds : public std::exception
{
        const char *what() const throw();
};

// class floatException : public std::exception
// {
//         const char *what() const throw();
// };

// class doubleException : public std::exception
// {
//         const char *what() const throw();
// };

// class charException : public std::exception
// {
//         const char *what() const throw();
// };

#endif 