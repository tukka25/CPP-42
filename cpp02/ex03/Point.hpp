#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
# include "Fixed.hpp"

class Point
{
    private:
		const Fixed   x;
		const Fixed   y;
    public:
        Point();
        Point(const Point &t);
        Point(const float a, const float b);
        ~Point();
		// int getConstX( void ) const;
		// void setConstX( int const raw );
    void	operator=(const Point &t);
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream& operator<<(std::ostream& os, const Point& t);
#endif