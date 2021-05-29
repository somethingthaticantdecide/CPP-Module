#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	*bob = new Bureaucrat("Bob", 10);
	Form	*form = new Form("Form", 10, 10);
	std::cout << *form; 
	bob->signForm(*form);
	std::cout << *form;
	
	std::cout << "=====================================" << std::endl;

	Form	*form_two = new Form("Form two", 5, 5);
	std::cout << *form_two;
	try {
		bob->signForm(*form_two);
	}
	catch(std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << *form_two;
}