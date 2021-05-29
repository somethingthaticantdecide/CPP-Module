#include "Character.hpp"

Character::Character() {
}

Character::Character(std::string const &name): name(name), ap(40), aweapon(NULL) {
}

std::string const Character::getName() const { return (this->name); }

Character::~Character() {}

Character::Character(Character const &object) {
    *this = object;
}

Character &Character::operator = (Character const &object) {
	if (this == &object)
        return (*this);
	this->name = object.getName();
	this->ap = object.getAp();
	this->aweapon = object.getAweapon();
	return (*this);
}

void Character::equip(AWeapon *aweapon) {
	this->aweapon = aweapon;
}

int  Character::getAp() const {
	return (this->ap);
}

AWeapon *Character::getAweapon()const {
	return (this->aweapon);	
}

void Character::recoverAP() {
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}

void	 Character::attack(Enemy *enemy) {
	if (!this->aweapon)
		return ;
	else if (this->ap < this->aweapon->getAPCost())
		std::cout << "Not enough energy!" << std::endl;
	else
	{
		std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->aweapon->getName() << std::endl;
		this->ap -= this->aweapon->getAPCost();
		this->aweapon->attack();
		enemy->takeDamage(this->aweapon->getDamage());
	}
}

std::ostream &operator << (std::ostream &res, Character const &character) {
	if (character.getAweapon())
		res << character.getName() << " has " << character.getAp() << " AP and wields a " << character.getAweapon()->getName() << std::endl;
	else
		res << character.getName() << " has " << character.getAp() << " AP and is unarmed" << std::endl;
	return (res);
}

