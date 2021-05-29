#include "Minigun.hpp"

Minigun::Minigun() : AWeapon("Minigun", 6, 40) {
}

Minigun::~Minigun() {}

Minigun::Minigun(Minigun const &object) {
	*this = object;
}

Minigun	&Minigun::operator = (Minigun const &object) {
	if (this == &object)
        return (*this);
	_name = object._name;
	_apcost = object._apcost;
	_damage = object._damage;
	return (*this);
}

void	Minigun::attack() const {
	std::cout << "* RA-TA-TA-TA-TA-TA.... TA *" << std::endl;
}