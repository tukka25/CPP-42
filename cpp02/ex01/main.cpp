# include "Fixed.hpp"

int main()
{
	Fixed	a (20);
	Fixed	const b( -10 );
	Fixed	const c( 42.42f );


	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
}