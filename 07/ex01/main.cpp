#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T> void print(T &a)
{
	std::cout << a << std::endl;
}

template <typename T> void print_double(T &a)
{
	std::cout << a + a << std::endl;
}


int main (void)
{
    int arr_1[] = {1, 3, 5, 2, 4, 6, 8, 9, 0}; 
    ::iter(arr_1, 9, print);

    std::string arr_2[] = {"uno", "dos", "tres"}; 
    ::iter(arr_2, 3, print);

	std::string arr_3[] = {"uno", "dos", "tres"}; 
    ::iter(arr_3, 3, print_double);
	
    return (0);
}