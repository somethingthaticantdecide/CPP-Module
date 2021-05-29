#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap("SUPER-TP"), FragTrap(), NinjaTrap()
{
	this->_hitPoints = FragTrap::get_hitPoints();
	this->_maxHitPoints = FragTrap::get_maxHitPoints();
	this->_energyPoints = NinjaTrap::get_energyPoints();
	this->_maxEnergyPoint = NinjaTrap::get_maxEnergyPoint();
	this->_level = 1;
	this->_meleeAttackDamage = NinjaTrap::get_meleeAttackDamage();
	this->_rangedAttackDamage = FragTrap::get_rangedAttackDamage();
	this->_armorDamageReduction = FragTrap::get_armorDamageReduction();
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(), NinjaTrap()
{
	this->_hitPoints = FragTrap::get_hitPoints();
	this->_maxHitPoints = FragTrap::get_maxHitPoints();
	this->_energyPoints = NinjaTrap::get_energyPoints();
	this->_maxEnergyPoint = NinjaTrap::get_maxEnergyPoint();
	this->_level = 1;
	this->_meleeAttackDamage = NinjaTrap::get_meleeAttackDamage();
	this->_rangedAttackDamage = FragTrap::get_rangedAttackDamage();
	this->_armorDamageReduction = FragTrap::get_armorDamageReduction();
}

SuperTrap	&SuperTrap::operator=(const SuperTrap &other) 
{
	this->_hitPoints = other._hitPoints;
	this->_maxHitPoints = other._maxHitPoints;
	this->_energyPoints = other._energyPoints;
	this->_maxEnergyPoint = other._maxEnergyPoint;
	this->_level = other._level;
	this->_name = other._name;
	this->_meleeAttackDamage = other._meleeAttackDamage;
	this->_rangedAttackDamage = other._rangedAttackDamage;
	this->_armorDamageReduction = other._armorDamageReduction;
	return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << _name << " says: Poop!" << std::endl;
}
