#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon &weapon) { this->_weapon = &weapon; }

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}