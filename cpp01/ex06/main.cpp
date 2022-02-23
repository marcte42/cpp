#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	int			index = -1;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (argc != 2)
		return (0);
	for (int i = 0; i < 4; i++)
		if (levels[i].compare(argv[1]) == 0)
			index = i;
	switch (index) {
		case 0:
			std::cout << "[ " << levels[0] << " ]" << std::endl;
			std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !\n" << std::endl;
		case 1:
			std::cout << "[ " << levels[1] << " ]" << std::endl;
			std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n" << std::endl;
		case 2:
			std::cout << "[ " << levels[2] << " ]" << std::endl;
			std::cout << "I think I deserve to have some extra bacon for free. \nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
		case 3:
			std::cout << "[ " << levels[3] << " ]" << std::endl;
			std::cout << "This is unacceptable ! I want to speak to the manager now.\n" << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
	}
	return (0);
}
