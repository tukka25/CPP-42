# include "Fixed.hpp"

int main()
{
	Fixed	a (20);
	Fixed	const b( -10 );
	Fixed	const c( 42.42f );
<<<<<<< HEAD

=======
	Fixed	ss;
	// Fixed	const d( -54.02f );
	ss = a;
	// a = Fixed(1234.4321f);
	std::cout << "ss is " << ss << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;
>>>>>>> 098112a (commit)

	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
}