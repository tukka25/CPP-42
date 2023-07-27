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
        ~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
    void	operator=(const Fixed &t);
};
#endif