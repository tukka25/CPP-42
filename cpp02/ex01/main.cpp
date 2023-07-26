# include "Fixed.hpp"

int main()
{
	//24.8
	// Fixed	a;
	Fixed	b(10);
	Fixed	c(2.4433f);

	// c = a;
	// a.setRawBits(0.0);
	// std::cout << a.getRawBits() << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
}