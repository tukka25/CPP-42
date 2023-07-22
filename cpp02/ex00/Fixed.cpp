# include "Fixed.hpp"

Fixed::Fixed()
{
	num = 0;
	// frac = 8;
}

Fixed::Fixed(const Fixed &t)
{
	// (void)t;
	num = t.num;
	// frac = t.num;
	std::cout << "Copy constructor" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "farc =" << frac << std::endl; 
	return (num);
}

void	Fixed::operator=(const Fixed &t)
{
	num = t.num;
}

void Fixed::setRawBits( int const raw )
{
	num = raw;
}

Fixed::~Fixed()
{
}