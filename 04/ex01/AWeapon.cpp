#include "AWeapon.hpp"

AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) {
		this->_name = name;
		this->_apcost = apcost;
		this->_damage = damage;
}

AWeapon::~AWeapon() {}

AWeapon::AWeapon(AWeapon const &object) {
	*this = object;
}

std::string const AWeapon::getName() const {return (this->_name);}
int AWeapon::getAPCost() const {return (this->_apcost);}
int AWeapon::getDamage() const {return (this->_damage);}

AWeapon &AWeapon::operator = (AWeapon const &object) {
	if (this == &object)
        return (*this);
	this->_name = object.getName();
	this->_damage = object.getDamage();
	this->_apcost = object.getAPCost();
	return (*this);
}
