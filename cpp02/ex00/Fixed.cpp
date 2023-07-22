# include "Fixed.hpp"

Fixed::Fixed()
{
	num = 0;
	// frac = 8;
}

Fixed::Fixed(const Fixed &t)
{
	(void)t;
	std::cout << "Copy constructor" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	return (num);
}

void Fixed::setRawBits( int const raw )
{
	num = raw;
}

Fixed::~Fixed()
{
}