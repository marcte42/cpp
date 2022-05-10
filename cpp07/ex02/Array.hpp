#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>

template <typename T>
class Array
{
public:
	Array()
	{
		_size = 0;
		_array = new T[_size];
	}

	Array(unsigned int n)
	{
		_size = n;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = 0;
	}

	Array(const Array &src)
	{
		_size = src.size();
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = src._array[i];
	}

	~Array()
	{
		delete[] _array;
	}

	Array &operator=(const Array &rhs)
	{
		if (_array)
			delete[] _array;
		_size = rhs.size();
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = rhs._array[i];
		return *this;
	}

	T &operator[](const unsigned int idx) const
	{
		if (idx + 1 > _size)
			throw std::exception();
		return (_array[idx]);
	}

	unsigned int size() const
	{
		return (_size);
	}

private:
	T *_array;
	unsigned int _size;
};

#endif