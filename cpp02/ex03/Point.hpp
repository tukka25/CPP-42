#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
# include "Fixed.hpp"

class Point
{
    private:
		const Fixed   x;
		const Fixed   x;
    public:
        Point();
        Point(const Point &t);
        Point(const Float a, const Float b);
        ~Point();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
    void	operator=(const Point &t);
};
#endif