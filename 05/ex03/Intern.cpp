#include "Intern.hpp"

typedef Form *(Intern::*formsPointers)(std::string target);

Intern::Intern()
{
}

Intern::Intern(Intern const &other)
{
	*this = other;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const &other)
{
	(void)other;
	return(*this);
}


Form *Intern::getRobotFormPtr(std::string target) {
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;
	return (new RobotomyRequestForm(target)); 
}

Form *Intern::getPresPardFormPtr(std::string target) { 
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;
	return (new PresidentialPardonForm(target)); 
}

Form *Intern::getShrubbFormPtr(std::string target) {
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
	return (new ShrubberyCreationForm (target));
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	formsPointers formPtr[3] = {&Intern::getRobotFormPtr, &Intern::getPresPardFormPtr, &Intern::getShrubbFormPtr};
	std::string formName[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	int i = 0;
	while (formName[i] != name && i < 3)
		i++;
	if (formName[i] == name)
		return (this->*formPtr[i])(target);
	std::cout << "Unknown form!" << std::endl;
	return (NULL);
}
