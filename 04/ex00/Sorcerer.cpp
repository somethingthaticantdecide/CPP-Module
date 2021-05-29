#include "Sorcerer.hpp"

std::string Sorcerer::getName() const { return this->_name; }
std::string Sorcerer::getTitle() const { return this->_title; }

Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title){
	std::cout << this->_name << ", " << this->_title << " , is born!" << std::endl;
}

Sorcerer::~Sorcerer(){
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!"  << std::endl;
}

std::ostream &operator<<(std::ostream &str, Sorcerer const &sorcerer){
	str << "I am, " << sorcerer.getName() << ", " << sorcerer.getTitle() << " and I like ponies!" << std::endl ;
	return (str);
}

void Sorcerer::polymorph(const Victim &victim) const {
	victim.getPolymorphed();
}

Sorcerer::Sorcerer(Sorcerer const &object){
	*this = object;
}

Sorcerer &Sorcerer::operator = (Sorcerer const &object){
	if (this == &object)
        return (*this);
	this->_name = object._name;
	this->_title = object._title;
	return (*this);
}
