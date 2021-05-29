#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>

class Span
{
	private:
		std::vector<unsigned int> _vector;

	public:
		Span();
		Span(unsigned int size);
		Span(Span const &other);
		~Span();

		Span &operator=(Span const &other);
		void addNumber(unsigned int number);
		void addNumber(unsigned int toStart, unsigned int theEnd);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		unsigned int size();
		void print();
};

#endif