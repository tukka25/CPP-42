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
		int getR awBits( void ) const;
		void setRawBits( int const raw );
    void	operator=(const Fixed &t);
    float toFloat( void ) const;
    int toInt( void ) const;
};
    std::ostream& operator<<(std::ostream& os, const Fixed& t);
#endif