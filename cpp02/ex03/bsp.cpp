#include "Point.hpp"

float ft_area(Point const p1, Point const p2, Point const p3)
{
   return ((	p1.getX()*(p2.getY()-p3.getY()) 
   			+ 	p2.getX()*(p3.getY()-p1.getY())
			+ 	p3.getX()*(p1.getY()-p2.getY())).toFloat() / 2.0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	float area = ft_area(a, b, c);
	float a1 = ft_area(point, a, b);
	float a2 = ft_area(point, a, c);
	float a3 = ft_area(point, c, b);

	if (a1 < 0)
		a1 *= -1;
	if (a2 < 0)
		a2 *= -1;
	if (a3 < 0)
		a3 *= -1;
	if (area < 0)
		area *= -1;
	
	if (area == (a1 + a2 + a3))
		return (true);
	return (false);
}