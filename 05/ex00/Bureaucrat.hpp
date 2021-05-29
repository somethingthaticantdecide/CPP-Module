#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
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
		std::string	_name;
		int			_grade;

		Bureaucrat();
	public:
		Bureaucrat(std::string _name, int _grade);
		Bureaucrat(Bureaucrat const &other);
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const &other);
		std::string	getName() const;
		int getGrade() const;
		void upgrade();
		void downgrade();
};

std::ostream& operator<<(std::ostream &str, Bureaucrat const &bureaucrat);

#endif