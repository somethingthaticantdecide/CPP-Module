#include "Ice.hpp"

Ice::Ice() : AMateria("Ice") {
}

Ice::~Ice() {
}

Ice::Ice(Ice const &object):AMateria("Ice") {
	*this = object;
}

Ice &Ice::operator = (Ice const &object) {
	if (this != &object)
		AMateria::operator=(object);
	return (*this);
}

AMateria *Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<std::endl;
}