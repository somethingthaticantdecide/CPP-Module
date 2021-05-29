#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &filename) : Form("ShrubberyCreationForm", 145, 137)
{
	this->_object = filename;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : Form("ShrubberyCreationForm", 145, 137)
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void	ShrubberyCreationForm::exec_form() const
{
	std::ofstream outf(_object);

    if (outf)
	{
		for(int i = 0; i < 30; i++)
		{
			std::string space(30 - i, '_');
			std::string shrub((2 * i) + 1, '*');
			outf << space << shrub << space << std::endl;
		}
		outf.close();
	}
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	if (this != &other)
		this->_object = other._object;
	return(*this);
}
