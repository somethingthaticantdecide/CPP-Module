#include "Victim.hpp"

std::string Victim::getName() const { return (this->_name);}

Victim::Victim(std::string name) {
	this->_name = name;
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << this->_name << " just died for no apparent reason!"  << std::endl;
}

std::ostream &operator << (std::ostream &str, Victim const &victim) {
	str << "I am " << victim.getName() << " and I like otters!" << std::endl;
	return (str);
}

void	Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

Victim::Victim(Victim const &obj) {
    *this = obj;
}

Victim & Victim::operator = (Victim const & object) {
	if (this == &object)
        return (*this);
	this->_name = object._name;
	return (*this);
}

Victim::Victim() {}
