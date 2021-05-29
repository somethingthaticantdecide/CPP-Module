#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Created default Bureaucrat!" << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(std::string name , int grade) : _name(name), _grade(grade)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Created Bureaucrat with " << this->_grade << " grade!" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other){
	*this = other;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this == &other)
        return (*this);
	this->_name = other._name;
	this->_grade = other._grade;
	return(*this);
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() { return ("Bureaucrat grade is too high!"); }
const char	*Bureaucrat::GradeTooLowException::what() const throw() { return ("Bureaucrat grade is too low!"); }

std::string Bureaucrat::getName() const { return _name; }
int Bureaucrat::getGrade() const { return _grade; }

void Bureaucrat::downgrade() {
	if (_grade == 150) 
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade++;
}

void Bureaucrat::upgrade() {
	if (_grade == 1) 
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade--;
}

void Bureaucrat::signForm(Form &form)
{
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	catch(std::exception &e) {
		std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form)
{
	try {
		form.execute(*this);
		std::cout << this->getName() << " execute " << form.getName() << std::endl;
	}
	catch(std::exception &e) {
		std::cout << _name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream &str, Bureaucrat const &bureaucrat)
{
	str <<  bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return (str);
}
