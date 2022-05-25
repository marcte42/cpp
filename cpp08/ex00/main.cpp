#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int> v;

	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	try
	{
		for (int i = 0; i < 10; i++)
		{
			easyfind(v, i);
			std::cout << i << " found" << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}

	return 0;
}
