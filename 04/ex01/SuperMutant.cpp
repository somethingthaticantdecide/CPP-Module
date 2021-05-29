#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	this->_damageReduction = 3;
	std::cout <<  "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &obj) {
    *this = obj;
}

SuperMutant &SuperMutant::operator = (SuperMutant const &object) {
	if (this == &object)
        return (*this);
	this->hp = object.hp;
	this->type = object.type;
	this->_damageReduction = object._damageReduction;
	return (*this);
}

void SuperMutant::takeDamage(int damage) {
	Enemy::takeDamage(damage - _damageReduction);
	// std::cout << "Aaargh... My hp are now " << this->getHP() << std::endl;
}