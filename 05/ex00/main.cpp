#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *bob = NULL;
	try {
		bob = new Bureaucrat("Bob", 151);
	}
	catch (std::exception &e) {
		std::cout << "too high" << std::endl;
	}

	try {
		bob = new Bureaucrat("Bob", 0);
	}
	catch (std::exception &e) {
		std::cout << "too low" << std::endl;
	}

	bob = new Bureaucrat("Bob", 150);
	std::cout << *bob;

	try {
		bob->downgrade();
		std::cout << *bob;
		bob->downgrade();
		std::cout << *bob;
	}
	catch(std::exception &e) {
		delete bob;
		std::cerr << e.what() << std::endl;
	}

	bob = new Bureaucrat("Bob", 1);
	std::cout << *bob;

	try {
		bob->upgrade();
		std::cout << *bob;
		bob->upgrade();
		std::cout << *bob;
	}
	catch(std::exception &e) {
		delete bob;
		std::cerr << e.what() << std::endl;
	}

}