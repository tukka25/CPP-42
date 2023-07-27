#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed 
{
    private:
		int			num;
		const static int	frac = 8;
    public:
        Fixed();
        Fixed(const int a);
        Fixed(const float a);
        Fixed(const Fixed &t);
        ~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
    	bool	operator>(const Fixed &t2) const;
    	bool	operator<(const Fixed &t2) const;
    	bool	operator==(const Fixed &t2) const;
    	bool	operator>=(const Fixed &t2) const;
    	bool	operator<=(const Fixed &t2) const;
    	bool	operator!=(const Fixed &t2) const;
    	Fixed	operator+(const Fixed &t2) const;
    	Fixed	operator-(const Fixed &t2) const;
    	Fixed	operator*(const Fixed &t2) const;
    	Fixed	operator/(const Fixed &t2) const;
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		static Fixed	min(Fixed &t1, Fixed &t2);
		static Fixed	max(Fixed &t1, Fixed &t2);
		static Fixed	min(const Fixed &t1, const Fixed &t2);
		static Fixed	max(const Fixed &t1, const Fixed &t2);
    	// Fixed	operator++() const;
    	void	operator=(const Fixed &t);
    	float toFloat( void ) const;
    	int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& os, const Fixed& t);
#endif