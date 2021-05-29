#include "Character.hpp"

std::string const &Character::getName() const { return (this->_name); }

Character::Character() {
	int i;

	i = -1;
	while (++i < 4)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name) , _inventory() {
	int i;

	i = -1;
	while (++i < 4)
		this->_inventory[i] = NULL;
}

Character::~Character() {
	int i;

	i = -1;
	while (++i < 4)
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
}

Character::Character(Character const &object) {
	*this = object;
}

Character &Character::operator = (Character const &object) {
	int i;

	if (this == &object)
		return (*this);
	this->_name = object.getName();
	i = -1;
	while (++i < 4)
	{
		if (this->_inventory[i] != NULL)
			delete _inventory[i];
		this->_inventory[i] = NULL;
	}
	i = -1;
	while (++i < 4)
		this->_inventory[i] = object._inventory[i]->clone();
	return (*this);
}

void Character::equip(AMateria	*m) {
	int i;

	if (!m)
		return ;
	i = -1;
	while (++i < 4)
	{
		if (this->_inventory[i] == NULL)
		{
			this-> _inventory[i] = m;
			// std::cout << "* equip " << m->getType() << std::endl;
			return ;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3 || this->_inventory[idx] == NULL)
		return ;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}