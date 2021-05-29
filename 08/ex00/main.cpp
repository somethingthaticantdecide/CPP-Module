#include "easyfind.hpp"

#include <vector>
#include <list>
#include <iostream>


int	main(void) {

	std::vector<int>			int_vector;
	std::vector<int>::iterator	int_i;

	for (int i = 0; i < 10; i++)
		int_vector.push_back(i);

	int_i = easyfind(int_vector, 5);
	if (int_i != int_vector.end())
		std::cout << "Found: " << *int_i << std::endl;
	else
		std::cerr << "Nope!" << std::endl;

	int_i = easyfind(int_vector, 10);
	if (int_i != int_vector.end())
		std::cout << "Found: " << *int_i << std::endl;
	else
		std::cerr << "Nope!" << std::endl;
	
	std::vector<char>			char_vector;
	std::vector<char>::iterator	char_i;

	for (int i = 0; i < 10; i++)
		char_vector.push_back(i + 'a');
	
	char_i = easyfind(char_vector, 'a');
	if (char_i != char_vector.end())
		std::cout << "Found: " << *char_i << std::endl;
	else
		std::cerr << "Nope!" << std::endl;

	char_i = easyfind(char_vector, 'z');
	if (char_i != char_vector.end())
		std::cout << "Found: " << *char_i << std::endl;
	else
		std::cerr << "Nope!" << std::endl;
	
	getchar();
	return 0;
}
