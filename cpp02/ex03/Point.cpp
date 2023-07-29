# include "Point.hpp"

Point::Point()
{
	// std::cout << "Constructor Called" << std::endl;
}

Point::Point(const float a, const float b): x(a), y(b)
{
	Fixed	Fa(a);
	std::cout << "get = " << Fa.getRawBits() << std::endl;
	// this->x = Fa;
	std::cout << "get2 = " << x.getRawBits() << std::endl;
	Fa.setRawBits(b);
	// (Fixed)this->y = Fa;
	// (Fixed)this->y.num = b;
}

int Point::getConstX( void ) const
{
	return (this->x.getRawBits());
}

int Point::getConstY(void) const
{
	return (this->y.getRawBits());
}

Point	&Point::operator=(const Point &t)
{
	Point temp(t.x.toFloat(), t.y.toFloat());
	// std::
	// (*this, temp);
		// (Fixed)this->x = t.x;
		// (Fixed)(this->y) = (t.y);
		return (*this);
	// }
}
// std::ostream& operator<<(std::ostream& os, const Point& t)
// {
// 	os << t.x.getRawBits();
// 	return (os);
// }

Point::Point(const Point &t)
{
	(Fixed)t.x = this->x;
	(Fixed)t.y = this->y;
}

Point::~Point()
{
	// std::cout << "Destructor Called" << std::endl;
}
