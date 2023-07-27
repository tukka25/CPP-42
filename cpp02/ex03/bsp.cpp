# include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    int     TotalArea;
    int     FirstArea;
    int     SecondArea;
    int     ThirdArea;

    FirstArea = 0.5 * (a.x * (b.y - point.y) + b.x * (point.y - a.y)
    + point.x * (a.y - b.y));
    SecondArea = 0.5 * (a.x * (b.y - point.y) + b.x * (point.y - a.y)
    + point.x * (a.y - b.y));
    ThirdArea = 0.5 * (a.x * (b.y - point.y) + b.x * (point.y - a.y)
    + point.x * (a.y - b.y));
    TotalArea = FirstArea + SecondArea + ThirdArea;
    std::cout << TotalArea << std::endl;

}