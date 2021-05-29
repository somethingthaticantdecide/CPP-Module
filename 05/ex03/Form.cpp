#include "Form.hpp"

Form::Form(std::string name , int grade_req_to_sign , int grade_req_to_exec) : _name(name), _grade_req_to_sign(grade_req_to_sign), _grade_req_to_exec(grade_req_to_exec)
{
	_signed = false;
	if (!_name.compare(""))
		throw std::invalid_argument("Wrong name!");
	if (_grade_req_to_sign > 150 || _grade_req_to_exec > 150)
		throw Form::GradeTooLowException();
	if (_grade_req_to_sign < 1 || _grade_req_to_exec < 1)
		throw Form::GradeTooHighException();
	std::cout << "Form " << _name << " created!" << std::endl;
}

Form::Form() : _name("Form"), _grade_req_to_sign(0), _grade_req_to_exec(0)
{

}

Form::Form(Form const &other) : _name(other._name), _grade_req_to_sign(other._grade_req_to_sign), _grade_req_to_exec(other._grade_req_to_exec)
{
	*this = other;
}

Form::~Form()
{
	std::cout << "Form " << _name << " destroyed!" << std::endl;
}

Form &Form::operator=(Form const &other)
{
	if (this != &other)
		*this = other;
	return(*this);
}

const char	*Form::GradeTooHighException::what() const throw() { return ("Bureaucrat grade is too high!"); }
const char	*Form::GradeTooLowException::what() const throw() { return ("Bureaucrat grade is too low!"); }

std::string Form::getName() const { return _name; }
int Form::getGradeReqToExec() const { return _grade_req_to_exec; }
int Form::getGradeReqToSign() const { return _grade_req_to_sign; }
bool Form::getSigned() const { return _signed; }

std::ostream& operator<<(std::ostream &str, Form const &form)
{
	if (form.getSigned())
		str << "Form: " << form.getName() << ", signed, form with grade required to execute: " << form.getGradeReqToExec() << " and grade required to sign: " << form.getGradeReqToSign() << "." << std::endl;
	else
		str << "Form: " << form.getName() << ", not signed, form with grade required to execute: " << form.getGradeReqToExec() << " and grade required to sign: " << form.getGradeReqToSign() << "." << std::endl;
	return (str);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _grade_req_to_sign)
		throw Form::GradeTooLowException();
	_signed = true;
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _grade_req_to_exec)
		throw GradeTooLowException();
	if (!_signed)
	{
		std::cout << "Form " <<  getName() << " is not signed!" << std::endl;
		return ;
	}
	exec_form();
}

void Form::exec_form( void ) const
{
	
}