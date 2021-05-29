#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern	someRandomIntern;
	Form	*rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	delete rrf;
	// rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	// delete rrf;
	// rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");

	// Bureaucrat				bob("Bob", 1);
	// rrf->beSigned(bob);
	// rrf->execute(bob);

	// Bureaucrat				bob("Bob", 150);
	// try {
	// 		rrf->beSigned(bob);
	// 		rrf->execute(bob);
	// }
	// catch(const std::exception& e) {
	// 	std::cerr << e.what() << '\n';
	// }
}