#pragma once
# ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	class GradeTooHighException : public std::exception {	
   		public:
			virtual	const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {	
		public:
			virtual	const char* what() const throw();
	};

	private:
		std::string	const	_name;
		int	const			_grade_req_to_sign;
		int	const			_grade_req_to_exec;
		bool				_signed;

		Form();
		virtual void exec_form() const;
	public:
		Form(std::string _name, int _grade_req_to_sign, int _grade_req_to_exec);
		Form(Form const &other);
		virtual ~Form();
		std::string	getName() const;
		int getGradeReqToExec() const;
		int getGradeReqToSign() const;
		bool getSigned() const;
		void beSigned(Bureaucrat const &bureaucrat);
		void execute(Bureaucrat const & executor) const;

		Form &operator=(Form const &other);

};

std::ostream& operator<<(std::ostream &str, Form const &form);

#endif