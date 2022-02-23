#include <iostream>
#include "Karen.hpp"

int main(int argc, char const *argv[])
{
	Karen karen;

	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
	karen.complain("LOL");
	return (0);
}
