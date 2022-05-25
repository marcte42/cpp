#include <iostream>
#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		// sp.addNumber(6);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(11);
		std::vector<int> v;
		v.push_back(1);
		v.push_back(5);
		v.push_back(10);
		v.push_back(-10);
		v.push_back(123);
		sp.addRange(v);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
