#pragma once
#ifndef INTERN_HPP
#define INTERN_HPP
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern
{
	private:

	public:
		Intern();
		Intern(Intern const &other);
		~Intern();

		Intern &operator=(Intern const &other);
		
		Form	*makeForm(std::string form_name, std::string target);	
		Form *getRobotFormPtr(std::string target);
		Form *getPresPardFormPtr(std::string target);
		Form *getShrubbFormPtr(std::string target);
};

#endif