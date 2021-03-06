#include <iostream>
#include <cstdlib>
#include "Class.hpp"

Base *generate(void)
{
	srand(time(NULL));
	if (rand() % 3 == 0)
		return (new A);
	if (rand() % 3 == 1)
		return (new B);
	return (new C);
}

void identify(Base *p)
{
	std::cout << "Identification by pointer" << std::endl;

	if (dynamic_cast<A *>(p))
		std::cout << "Identity: A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Identity: B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Identity: C" << std::endl;
	else
		std::cout << "Identity: Unknown" << std::endl;
}

void identify(Base &p)
{
	std::cout << "Identification by reference" << std::endl;

	try
	{
		dynamic_cast<A &>(p);
		std::cout << "Identity: A" << std::endl;
		return;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		dynamic_cast<B &>(p);
		std::cout << "Identity: B" << std::endl;
		return;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		dynamic_cast<C &>(p);
		std::cout << "Identity: C" << std::endl;
		return;
	}
	catch (std::exception &e)
	{
	}
	std::cout << "Identity: Unknown" << std::endl;
}

int main()
{
	identify(generate());

	A a;
	B b;
	C c;

	identify(a);
	identify(b);
	identify(c);
	identify(NULL);

	return 0;
}
