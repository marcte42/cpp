#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
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
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::vector<char> v;

		v.push_back('a');
		v.push_back('b');
		v.push_back('c');
		v.push_back('d');
		v.push_back('e');
		v.push_back('f');

		try
		{
			for (char i = 'a'; i < 'z'; i++)
			{
				easyfind(v, i);
				std::cout << i << " found" << std::endl;
			}
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
