#include "AMateria.hpp"

AMateria::~AMateria() {
}

AMateria::AMateria(std::string const &type): _type(type), _xp(0) {
}

unsigned int AMateria::getXP() const { return (this->_xp); }
std::string const &AMateria::getType() const { return (this->_type); }

AMateria::AMateria(AMateria const &object) {
	*this = object;
}

AMateria	&AMateria::operator = (AMateria const &object) {
	if (this != &object)
		this->_xp = object.getXP();
	return (*this);
}

void AMateria::use(ICharacter &target) {
	(void)target;
	this->_xp += 10;
}
