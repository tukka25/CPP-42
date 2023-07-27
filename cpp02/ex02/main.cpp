# include "Fixed.hpp"

int main()
{
	//24.8
	Fixed	a;
	Fixed	const b( 10 );
	Fixed	const c( 42.42f );
	Fixed	const d( b );

	a = Fixed(1234.4321f);
	if (c > d)
		std::cout << "bigger than" << std::endl;
	if (b == d)
		std::cout << "equal than" << std::endl;
	if (b < c)
		std::cout << "less than" << std::endl;
	if (c != d)
		std::cout << "not equal" << std::endl;
	if (a >= d)
		std::cout << "bigger than or equal" << std::endl;
	if (b <= a)
		std::cout << "less than or equal" << std::endl;
	std::cout << "a + b" << a + b << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a before increment" << a << std::endl;
	a++;
	std::cout << "a after increment" << a <<std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toFloat() << " as integer" << std::endl;
}