#include "RobotomyRequestForm.hpp"
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string &object) : Form("RobotomyRequestForm", 72, 45)
{
	this->_object = object;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : Form("RobotomyRequestForm", 72, 45)
{
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void	RobotomyRequestForm::exec_form() const
{
	srand(time(NULL));
	if (rand() % 2)
		std::cout << _object << "  has been robotomized successfully 50% of the time. " << std::endl;
	else
		std::cout << "it’s a failure." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	if (this != &other)
		this->_object = other._object;
	return(*this);
}

