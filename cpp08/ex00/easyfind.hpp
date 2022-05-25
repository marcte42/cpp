#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::const_iterator easyfind(const T &container, int nb)
{
	typename T::const_iterator it;

	if ((it = std::find(container.begin(), container.end(), nb)) == container.end())
		throw std::exception();
	return (it);
}

#endif
