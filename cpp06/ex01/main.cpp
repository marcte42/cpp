#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main(int argc, char const *argv[])
{
    Data *data = new Data;

    std::cout << data << std::endl;
    std::cout << serialize(data) << std::endl;
    std::cout << deserialize(serialize(data)) << std::endl;

    static_cast<void>(argc);
    static_cast<void>(argv);
    return 0;
}
