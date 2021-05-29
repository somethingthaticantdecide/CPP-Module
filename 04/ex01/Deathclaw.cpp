#include "Deathclaw.hpp"

Deathclaw::Deathclaw() : Enemy(225, "Super Mutant") {
	this->_damageReduction = 10;
	std::cout <<  " * Deathclaw don't talk but you better run! * " << std::endl;
}

Deathclaw::~Deathclaw() {
	std::cout << "Still no words from Deathclaw!" << std::endl;
}

Deathclaw::Deathclaw(Deathclaw const &obj) {
    *this = obj;
}

Deathclaw &Deathclaw::operator = (Deathclaw const &object) {
	if (this == &object)
        return (*this);
	this->hp = object.hp;
	this->type = object.type;
	this->_damageReduction = object._damageReduction;
	return (*this);
}

void Deathclaw::takeDamage(int damage) {
	Enemy::takeDamage(damage - _damageReduction);
	// std::cout << "Aaargh... My hp are now " << this->getHP() << std::endl;
}