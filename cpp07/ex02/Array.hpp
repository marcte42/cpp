#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>

template <typename T>
class Array
{
public:
    Array();
    Array(unsigned int n);
    Array(const Array &src);
    ~Array();
    Array &operator=(const Array &rhs);
    T &operator[](const unsigned int idx);

    const unsigned int size() const;

private:
    T *_array;
    unsigned int _size;
};

#endif