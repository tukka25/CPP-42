# include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    int     TotalArea;
    int     FirstArea;
    int     SecondArea;
    int     ThirdArea;

	std::cout << "a = " << a.getConstX() << std::endl;
    FirstArea = 0.5 * ((a.getConstX() * (b.getConstY() - point.getConstY())) + (b.getConstX() * (point.getConstY() - a.getConstY()))
    + (point.getConstX() * (a.getConstY() - b.getConstY())));


    SecondArea = 0.5 * ((b.getConstX() * (c.getConstY() - point.getConstY())) + (c.getConstX() * (point.getConstY() - b.getConstY()))
    + (point.getConstX() * (b.getConstY() - c.getConstY())));


    ThirdArea = 0.5 * ((a.getConstX() * (c.getConstY() - point.getConstY())) + (c.getConstX() * (point.getConstY() - a.getConstY()))
    + (point.getConstX() * (a.getConstY() - c.getConstY())));


    TotalArea = FirstArea + SecondArea + ThirdArea;
    std::cout << TotalArea << std::endl;
	return (true);

}