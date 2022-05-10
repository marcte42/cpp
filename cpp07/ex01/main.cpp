#include <iostream>
#include "iter.hpp"

template <typename T>
void printTab(const T &content)
{
    std::cout << content << std::endl;
}

int main(void)
{
    int intTab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float floatTab[10] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 10.10f};
    char charTab[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    iter<int>(intTab, 10, &printTab);
    iter<float>(floatTab, 10, &printTab);
    iter<char>(charTab, 10, &printTab);
    return 0;
}
