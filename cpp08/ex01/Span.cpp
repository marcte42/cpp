#include "Span.hpp"

Span::Span() : _N(0)
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::~Span()
{
}

void Span::addNumber(int nb)
{
	if (_span.size() == _N)
		throw std::exception();
	_span.push_back(nb);
}

unsigned int Span::shortestSpan()
{
	std::vector<int> tmp = _span;
	unsigned int minSpan = longestSpan();
	unsigned int currSpan;

	if (_span.size() < 2)
		throw std::exception();
	std::sort(tmp.begin(), tmp.end());
	for (size_t i = 1; i < tmp.size(); i++)
	{
		currSpan = tmp[i] - tmp[i - 1];
		if (currSpan < minSpan)
			minSpan = currSpan;
	}
	return (minSpan);
}

unsigned int Span::longestSpan()
{
	std::vector<int> tmp = _span;

	if (_span.size() < 2)
		throw std::exception();

	std::sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());
}
