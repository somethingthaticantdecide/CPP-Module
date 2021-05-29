#pragma once
#ifndef PRESIDENTALPARDONFORM_HPP
#define PRESIDENTALPARDONFORM_HPP
#include "Form.hpp"
#include <fstream>
#include <string>

class PresidentialPardonForm : public Form
{
	private:
		std::string	_object;

		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string &name);
		PresidentialPardonForm(PresidentialPardonForm const &other);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
		void exec_form( void ) const;
};

#endif