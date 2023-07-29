# include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default Constructor Called" << std::endl;
	num = 0;
}

Fixed::Fixed(const float &a)
{
	// float		f;
	// std::cout << "float Constructor" << std::endl;
	num = roundf((a * (1 << frac)));
}

Fixed::Fixed(const Fixed &t)
{
	num = t.num;
	// std::cout << "Copy constructor" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits function called" << std::endl;
	return (num);
}

Fixed	&Fixed::operator=(const Fixed &t)
{
	// std::cout << "Copy Assignment Operator Called" << std::endl;
	this->num = t.num;
	return (*this);
}

void Fixed::setRawBits( int const raw )
{
	num = raw;
}

Fixed	Fixed::operator*(const Fixed &t2) const
{
	Fixed	a;

	// std::cout << "this = " << this->num << std::endl;
	// std::cout << "t2 = " << t2.num << std::endl;
	a.num = ((this->toFloat()) * (t2.toFloat())) * 256;
	// std::cout << "a = " << a.num << std::endl;
	return (a);
}

float Fixed::toFloat( void ) const
{
	float	a;
	a = (double)num / (double)((1 << frac));
	return (a);
}

int Fixed::toInt( void ) const
{
	int		a;

	a = num >> frac;
	return (a);
}

Fixed	Fixed::operator+(const Fixed &t2) const
{
	Fixed	a;

	a.num = this->num + t2.num;
	return (a);
}

Fixed	Fixed::operator-(const Fixed &t2) const
{
	Fixed	a;

	a.num = this->num - t2.num;
	return (a);
}

// std::ostream& operator<<(std::ostream& os, const Point& t)
// {
// 	os << t.x.getRawBits();
// 	return (os);
// }

Fixed::~Fixed()
{
	// std::cout << "Destructor Called" << std::endl;
}