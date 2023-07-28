# include "Point.hpp"

Point::Point()
{
	std::cout << "Constructor Called" << std::endl;
}

Point::Point(const float a, const float b)
{
	Fixed	Fa;

	Fa.setRawBits(a);
	(Fixed)this->x = Fa;
	Fa.setRawBits(b);
	(Fixed)this->y = Fa;
	// (Fixed)this->y.num = b;
}

// int Point::getConstX( void ) const
// {
// 	return (this->x.getRawBits());
// }

// void Point::setConstX( int const raw )
// {
// 	this->x.setRawBits(raw);
// }

void	Point::operator=(const Point &t)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	// if ()
	// {
		(Fixed)(this->x) = (t.x);
		(Fixed)(this->y) = (t.y);
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
	std::cout << "Destructor Called" << std::endl;
}
