#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
}

PowerFist::~PowerFist() {}

PowerFist::PowerFist(PowerFist const &object) {
	*this = object;
}

PowerFist	&PowerFist::operator = (PowerFist const &object) {
	if (this == &object)
        return (*this);
	_name = object._name;
	_apcost = object._apcost;
	_damage = object._damage;
	return (*this);
}

void	PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}