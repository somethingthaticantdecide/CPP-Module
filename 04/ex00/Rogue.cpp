#include "Rogue.hpp"

Rogue::Rogue() {}

std::string Rogue::getName() const { return (this->_name);}

Rogue::Rogue(std::string name) : Victim(name) {
	this->_name = name;
	std::cout << "The Brotherhood shall prevail." << std::endl;
}

Rogue::~Rogue() {
	std::cout << "Nooooo..." <<std::endl;
}

std::ostream &operator << (std::ostream &str, Rogue const &rogue) {
	str << "I am " << rogue.getName() << " and I like otters!" << std::endl;
	return (str);
}

void	Rogue::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a mighty evil but still quite little sheep!" << std::endl;
}

Rogue::Rogue(Rogue const &object) {
    *this = object;
}

Rogue &Rogue::operator = (Rogue const &object) {
	if (this == &object)
        return (*this);
	this->_name = object._name;
	return (*this);
}
