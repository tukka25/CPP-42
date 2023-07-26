# include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default Constructor Called" << std::endl;
	num = 0;
}

Fixed::Fixed(const int a)
{
	std::cout << "int Constructor" << std::endl;
	num = a << frac;

}

Fixed::Fixed(const float a)
{
	// float		f;
	std::cout << "float Constructor" << std::endl;
	num = roundf((a * (1 << frac)));
}

std::ostream& operator<<(std::ostream& os, const Fixed& t)
{
	os << (double)t.num / (double)((1 << t.frac));
	return (os);
}

float Fixed::toFloat( void ) const
{
	float	a;

	a = (float)num / (float)((1 << frac));
	return (a);
}

int Fixed::toInt( void ) const
{
	int		a;

	a = num >> frac;
	return (a);
}

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