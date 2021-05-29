#include "span.hpp"
#include <iostream>

int main_2()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// Span sp = Span(4294967295);
	// sp.addNumber(1, 100000);
	// sp.print();
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;

	// Span sp = Span(2);
	// sp.addNumber(5);
	// sp.addNumber(5);
	// try
	// {
	// 	sp.addNumber(5);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// sp.print();

	return (0);
}

int main()
{
	main_2();
	// getchar();
}