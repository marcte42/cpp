#include "Converter.hpp"
#include <cstring>

int main(int argc, char const *argv[])
{
	if (argc != 2 || strlen(argv[1]) == 0)
		return 0;
	try
	{
		Converter converter(argv[1]);
		converter.printAll();
	}
	catch (std::exception &e)
	{
		std::cout << "Invalid arg !" << std::endl;
	}
	return 0;
}
