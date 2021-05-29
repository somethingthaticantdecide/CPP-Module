#include "Cure.hpp"

Cure::Cure() : AMateria("Cure") {
}

Cure::~Cure() {
}

Cure::Cure(Cure const &object):AMateria("Cure") {
	*this = object;
}

Cure &Cure::operator = (Cure const &object) {
	if (this != &object)
		AMateria::operator=(object);
	return (*this);
}

AMateria *Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}