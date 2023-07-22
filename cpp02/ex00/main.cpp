# include "Fixed.hpp"

int main()
{
	Fixed	a;
	Fixed	c;

	a.setRawBits(2);
	std::cout << "a = " << a.getRawBits() << std::endl;
	Fixed	b(a);
	std::cout << "b = " << b.getRawBits() << std::endl;
	c = a;
	std::cout << "c = " << c.getRawBits() << std::endl;
}