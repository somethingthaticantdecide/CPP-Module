#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &object) {
	*this = object;
}

PlasmaRifle	&PlasmaRifle::operator = (PlasmaRifle const &object) {
	if (this == &object)
        return (*this);
	_name = object._name;
	_apcost = object._apcost;
	_damage = object._damage;
	return (*this);
}

void	PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}