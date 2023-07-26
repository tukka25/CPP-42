# include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default Constructor Called" << std::endl;
	num = 0;
}

Fixed::Fixed(const int a)
{
	std::cout << "int Constructor" << std::endl;
	std::cout << (1 >> frac) << std::endl;
	num = a << frac;
	std::cout << "num inside : " << num << std::endl;

}

Fixed::Fixed(const float a)
{
	// float		f;
	std::cout << "float Constructor" << std::endl;
	std::cout << "shifting result:" << (1 << frac) << std::endl;
	num = (int)(a * (1 << frac));
	// num = f;
	// num = a / (float)(1 << frac);
	// num = 0;
}

std::ostream& operator<<(std::ostream& os, const Fixed& t)
{
	os << (t.num >> 8);
	return (os);
}

// float Fixed::toFloat( void ) const
// {

// }

// int Fixed::toInt( void ) const
// {

// }

Fixed::Fixed(const Fixed &t)
{
	num = t.num;
	std::cout << "Copy constructor" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits function called" << std::endl;
	return (num);
}

void	Fixed::operator=(const Fixed &t)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	num = t.num;
}

void Fixed::setRawBits( int const raw )
{
	num = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}