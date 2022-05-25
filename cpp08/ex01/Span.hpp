#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>

class Span
{
public:
	Span();
	Span(unsigned int N);
	~Span();

	void addNumber(int nb);
	unsigned int shortestSpan();
	unsigned int longestSpan();

	template <typename T>
	void addRange(T &range)
	{
		if (range.size() > _N)
			throw std::exception();
		_span.assign(range.begin(), range.end());
	}

private:
	unsigned int _N;
	std::vector<int> _span;
};

#endif
