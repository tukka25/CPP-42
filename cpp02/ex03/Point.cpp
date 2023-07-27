# include "Point.hpp"

Point::Point()
{
	std::cout << "Constructor Called" << std::endl;
}

int Point::getConstX( void ) const
{
	return (this->x.getRawBits());
}

void Point::setConstX( int const raw )
{
	this->x.setRawBits(raw);
}

void	Point::operator=(const Point &t)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	this->setConstX(t.getConstX());
	// y.setRawBits(t.y.getRawBits());
}

// Point::Point(const Point &t)
// {
// 	t.x = this->x;
// 	t.y = this->y;
// }

Point::~Point()
{
	std::cout << "Destructor Called" << std::endl;
}