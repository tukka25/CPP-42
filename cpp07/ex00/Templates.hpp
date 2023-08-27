#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

#include <iostream>
#include "Templates.tpp"

// template <class T>
class Templates
{
	public:
		// T min();
		Templates();
		~Templates();
};

template <class T> T min(T a, T b);

template <class T> T max(T a, T b);

template <class T> void swap(T &a, T &b);

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