#include "Converter.hpp"

int main(int argc, char const *argv[])
{
    if (argc != 2)
        return 0;
    try {
        Converter converter(argv[1]);
        std::cout << converter.getArg() << std::endl;
    } catch (std::exception &e) {
        std::cout << "Invalid arg !" << std::endl;
    }
    return 0;
}
