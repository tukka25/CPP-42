# include "Fixed.hpp"

int main()
{
	//24.8
	Fixed	a (20);
	Fixed	const b( -10 );
	Fixed	const c( 42.42f );
	Fixed	ss(a);
	// Fixed	const d( -54.02f );

	// a = Fixed(1234.4321f);
	std::cout << "ss is " << ss << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;

	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toFloat() << " as integer" << std::endl;
}