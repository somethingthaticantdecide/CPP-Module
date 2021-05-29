#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string &name) : Form("PresidentialPardonForm", 25, 5)
{
	this->_object = name;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : Form("PresidentialPardonForm", 25, 5)
{
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	if (this != &other)
		this->_object = other._object;
	return(*this);
}

void	PresidentialPardonForm::exec_form() const
{
	std::cout << _object << " has been pardoned by Zafod Beeblebrox." << std::endl;
}