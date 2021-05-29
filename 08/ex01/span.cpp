#include <algorithm>
#include "span.hpp"

Span::Span()
{

}

Span::Span(unsigned int size)
{
	this->_vector.reserve(size);
}

Span::Span(Span const &other)
{
	this->_vector = other._vector;
}

Span::~Span()
{
	this->_vector.clear();
}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
		this->_vector = other._vector;
	return(*this);
}

void Span::addNumber(unsigned int number)
{
	if (_vector.size() == _vector.capacity())
		throw std::exception();
	this->_vector.push_back(number);
}

unsigned int Span::shortestSpan()
{
	unsigned int i;
	long min;
	unsigned int size;

	size = this->_vector.size();
	if (size < 2)
		throw std::exception();

	std::sort(this->_vector.begin(), this->_vector.end());
	min = 9223372036854775807;
	i = 0;
	while (i < size)
	{
		if (min > _vector[i + 1] - _vector[i])
			min = _vector[i + 1] - _vector[i];
		i++;
	}
	return (min);
}

unsigned int Span::longestSpan()
{
	int max;
	int min;

	size_t size = this->_vector.size();
	if (size < 2)
		throw std::exception();
	max = *std::max_element(this->_vector.begin(), this->_vector.end());
	min = *std::min_element(this->_vector.begin(), this->_vector.end());
	return max - min;
}

void	Span::addNumber(unsigned int start, unsigned int end)
{
	while (start <= end)
		addNumber(start++);
}

unsigned int	Span::size()
{
	return this->_vector.size();
}

void	Span::print()
{
	unsigned int i = 0;
	while (i < _vector.size())
		std::cout << _vector[i++] << std::endl;
}