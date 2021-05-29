#pragma once
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>
#include <string>

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_object;
		
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(std::string &filename);
		ShrubberyCreationForm(ShrubberyCreationForm const &other);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
		void exec_form( void ) const;
};

#endif