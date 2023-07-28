#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed 
{
    private:
		int			num;
		const static int	frac = 8;
    public:
        Fixed();
        Fixed(const Fixed &t);
		Fixed(const float &a);
        ~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed	&operator=(const Fixed &t);
		Fixed	operator*(const Fixed &t2) const;
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed	operator+(const Fixed &t2) const;
		Fixed	operator-(const Fixed &t2) const;
};
#endif