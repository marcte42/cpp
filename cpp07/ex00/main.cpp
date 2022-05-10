#include <iostream>
#include "whatever.hpp"

int main()
{
    int a = 5;
    int b = 2;
    float c = 5.1f;
    float d = 5.4f;
    char e = 'e';
    char f = 'f';

    std::cout << min<int>(a, b) << std::endl;
    std::cout << min<float>(c, d) << std::endl;
    std::cout << min<char>(e, f) << std::endl;
    std::cout << max<int>(a, b) << std::endl;
    std::cout << max<float>(c, d) << std::endl;
    std::cout << max<char>(e, f) << std::endl;

    swap<int>(a, b);
    swap<float>(c, d);
    swap<char>(e, f);
    std::cout << a << std::endl;
    std::cout << c << std::endl;
    std::cout << e << std::endl;

    return 0;
}
