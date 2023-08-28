#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
	private:
		T *arr;
	public:
		// Array(const Array& t);
		// Array&	operator=(const Array &t);
		Array(T n);
		// Array(const T &n);
		int	size() const;
		T&	operator[](const int index) const;
		Array();
		// ~Array();
};

#include "Array.tpp"

// template <class S, class T, class F> void Iter(S &a, T length, F function);

// template <class C> char Encryption(C c);
// template <class C> char Decryption(C c);

class intException : public std::exception
{
        const char *what() const throw();
};

class floatException : public std::exception
{
        const char *what() const throw();
};

class doubleException : public std::exception
{
        const char *what() const throw();
};

class charException : public std::exception
{
        const char *what() const throw();
};

#endif 