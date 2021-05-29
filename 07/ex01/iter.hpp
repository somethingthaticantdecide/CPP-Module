#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <class T> void iter(T array[], int size, void (*f)(T const &))
{
	int	i;

	i = -1;
	while (++i < size)
		(*f)(array[i]);
}

#endif