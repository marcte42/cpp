#include <iostream>
#include "Point.hpp"
#include "bsp.hpp"

int main( void ) {
	Point t1(Fixed(-2), Fixed(1));
	Point t2(Fixed(1), Fixed(5));
	Point t3(Fixed(3), Fixed(2));
	Point point1(Fixed(0), Fixed(2.8f));
	Point point2(Fixed(10), Fixed(12.8f));
	Point point3(Fixed(0), Fixed(0));
	Point point4(Fixed(1), Fixed(1.78f));
	

	(bsp(t1, t2, t3, point1)) ? std::cout << "in" << std::endl : std::cout << "out" << std::endl;
	(bsp(t1, t2, t3, point2)) ? std::cout << "in" << std::endl : std::cout << "out" << std::endl;
	(bsp(t1, t2, t3, point3)) ? std::cout << "in" << std::endl : std::cout << "out" << std::endl;
	(bsp(t1, t2, t3, point4)) ? std::cout << "in" << std::endl : std::cout << "out" << std::endl;
return 0;
}
