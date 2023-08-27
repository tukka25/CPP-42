#ifndef ITERT_HPP
#define ITERT_HPP

#include <iostream>
#include "IterT.tpp"

// template <class T>
class IterT
{
	public:
		IterT(const IterT& t);
		IterT&	operator=(const IterT &t);
		IterT();
		~IterT();
};

template <class S, class T, class F> void Iter(S &a, T length, F function);

template <class C> char Encryption(C c);
template <class C> char Decryption(C c);

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