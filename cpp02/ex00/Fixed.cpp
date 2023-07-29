# include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default Constructor Called" << std::endl;
	num = 0;
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
	this->num = t.num;
}

void Fixed::setRawBits( int const raw )
{
	num = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}