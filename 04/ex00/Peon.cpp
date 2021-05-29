#include "Peon.hpp"

Peon::Peon() {}

Peon::Peon(std::string name): Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." <<std::endl;
}

void	Peon::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

Peon &Peon::operator = (const Peon &object) {
	if (this == &object)
        return (*this);
	this->_name = object._name;
	return (*this);
}

Peon::Peon(const Peon &obj) {
	*this = obj;
}
