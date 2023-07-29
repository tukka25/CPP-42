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

bool	Fixed::operator>(const Fixed &t2) const
{
	if (this->num > t2.num)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &t2) const
{
	if (this->num < t2.num)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &t2) const
{
	if (this->num >= t2.num)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &t2) const
{
	if (this->num <= t2.num)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &t2) const
{
	if (this->num == t2.num)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &t2) const
{
	if (this->num != t2.num)
		return (true);
	return (false);
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

Fixed	Fixed::operator*(const Fixed &t2) const
{
	Fixed	a;

	a.num = ((this->toFloat()) * (t2.toFloat())) * 256;
	return (a);
}

Fixed	Fixed::operator/(const Fixed &t2) const
{
	Fixed	a;

	a.num = (this->toFloat() / t2.toFloat()) * (1 << t2.frac);
	return (a);
}

Fixed&	Fixed::operator++()
{
	num++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	a;

	a.num = this->num;
	this->num++;
	return (a);
}

Fixed&	Fixed::operator--()
{
	num--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	a;

	a.num = this->num;
	this->num--;
	return (a);
}

Fixed::Fixed(const float a)
{
	num = roundf((a * (1 << frac)));
}

std::ostream& operator<<(std::ostream& os, const Fixed& t)
{
	os << t.toFloat();
	return (os);
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

Fixed	Fixed::min(Fixed &t1, Fixed &t2)
{
	Fixed	tmp;

	tmp.setRawBits(t1.getRawBits());
	if (t1.getRawBits() > t2.getRawBits())
	{
		tmp.setRawBits(t2.getRawBits());
		return (tmp);
	}
	return (tmp);

}

Fixed	Fixed::min(const Fixed &t1, const Fixed &t2)
{
	Fixed	tmp;

	tmp.setRawBits(t1.getRawBits());
	if (t1.getRawBits() > t2.getRawBits())
	{
		tmp.setRawBits(t2.getRawBits());
		return (tmp);
	}
	return (tmp);

}

Fixed	Fixed::max(Fixed &t1, Fixed &t2)
{
	Fixed	tmp;

	tmp.setRawBits(t2.getRawBits());
	if (t1.getRawBits() > t2.getRawBits())
	{
		tmp.setRawBits(t1.getRawBits());
		return (tmp);
	}
	return (tmp);

}

Fixed	Fixed::max(const Fixed &t1, const Fixed &t2)
{
	Fixed	tmp;

	tmp.setRawBits(t2.getRawBits());
	if (t1.getRawBits() > t2.getRawBits())
	{
		tmp.setRawBits(t1.getRawBits());
		return (tmp);
	}
	return (tmp);

}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}