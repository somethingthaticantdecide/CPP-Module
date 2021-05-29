#pragma once
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include <string>

class RobotomyRequestForm : public Form
{
	private:
		std::string	_object;

		RobotomyRequestForm();
	public:

		RobotomyRequestForm(std::string &filename);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
		void exec_form( void ) const;
};

#endif