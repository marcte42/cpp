#ifndef ITER_HPP
#define ITER_HPP

#include <cstdlib>

template <typename T>
void iter(T *tab, int tabSize, void (*f)(const T &content))
{
    for (int i = 0; i < tabSize; i++)
        f(tab[i]);
}

#endif