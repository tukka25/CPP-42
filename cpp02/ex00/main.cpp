# include "Fixed.hpp"

int main()
{
	Fixed	a;

	a.setRawBits(2);
	std::cout << "a = " << a.getRawBits() << std::endl;
	Fixed	b(a);
	std::cout << "b = " << b.getRawBits() << std::endl;
}