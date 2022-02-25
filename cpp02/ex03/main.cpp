#include <iostream>
#include "Point.hpp"
#include "bsp.hpp"

int main( void ) {
	Point t1(Fixed(-2), Fixed(1));
	Point t2(Fixed(1), Fixed(5));
	Point t3(Fixed(3), Fixed(2));
	Point point(Fixed(0), Fixed(2.8f));

	if (bsp(t1, t2, t3, point))
		std::cout << "in" << std::endl;
	else
		std::cout << "out" << std::endl;
return 0;
}
