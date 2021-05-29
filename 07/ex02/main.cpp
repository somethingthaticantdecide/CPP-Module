#include "Array.hpp"
#include <iostream>

int main_2 (void)
{
	Array<int> empty_array = Array<int>();
	empty_array.print();
	try
	{
		empty_array[0] = -2147483648;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	Array<int> array_1 = Array<int>(5);
	Array<int> array_3 = Array<int>(1000);

	std::cout << "Array 1 size: \n" << array_1.size() << std::endl;
	std::cout << "Array 3 size: \n" << array_3.size() << std::endl;
	array_3 = array_1;
	std::cout << "Array 1 size: \n" << array_1.size() << std::endl;
	std::cout << "Array 3 size: \n" << array_3.size() << std::endl;
	
	std::cout << array_1[2] << std::endl;
	std::cout << array_1[3] << std::endl;
	array_1[2] = -2147483648;
	array_1[3] = 2147483647;
	std::cout << array_1[2] << std::endl;
	std::cout << array_1[3] << std::endl;
    array_1.print();

	Array<int> array_2 = Array<int>(array_1);
	std::cout << "Array 2 size: \n" << array_2.size() << std::endl;
	array_2.print();

	try
	{
		array_1[-1] = 5;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		array_1[5] = 5;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		array_1[1001] = 5;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
    return (0);
}

int main (void)
{	
	main_2();
	getchar();
    return (0);
}