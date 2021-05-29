#include "ClapTrap.hpp"

std::string ClapTrap::get_name() {return (_name);}
int 		ClapTrap::get_hitPoints() {return (_hitPoints);}
int 		ClapTrap::get_maxHitPoints() {return (_maxHitPoints);}
int 		ClapTrap::get_energyPoints() {return (_energyPoints);}
int 		ClapTrap::get_maxEnergyPoint() {return (_maxEnergyPoint);}
int 		ClapTrap::get_level() {return (_level);}
int 		ClapTrap::get_meleeAttackDamage() {return (_meleeAttackDamage);}
int 		ClapTrap::get_rangedAttackDamage() {return (_rangedAttackDamage);}
int 		ClapTrap::get_armorDamageReduction() {return (_armorDamageReduction);}

ClapTrap::ClapTrap(std::string name, int hitPoints, int maxHitPoints, int energyPoints, int maxEnergyPoint, int level, 
int meleeAttackDamage, int rangedAttackDamage, int armorDamageReduction) 
{
	this->_hitPoints = hitPoints;
	this->_maxHitPoints = maxHitPoints;
	this->_energyPoints = energyPoints;
	this->_maxEnergyPoint = maxEnergyPoint;
	this->_level = level;
	this->_name = name;
	this->_meleeAttackDamage = meleeAttackDamage;
	this->_rangedAttackDamage = rangedAttackDamage;
	this->_armorDamageReduction = armorDamageReduction;
	std::cout << "Hey everybody, I'm Trap, Claptrap. Double oh... Trap " << this->_name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "10000110001101111010010100010111111100001111" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << _name << " attacks " << target << " at range, causing " << _rangedAttackDamage << " points of damage!" << std::endl;;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << _name << " attacks " << target << " with melee attack, causing " << _meleeAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	amount -= _armorDamageReduction;
	if (amount > _hitPoints)
		amount = _hitPoints;
	_hitPoints -= amount;

	std::cout << _name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints + amount > _maxHitPoints)
		amount = _maxHitPoints - _hitPoints;
	_hitPoints += amount;
	
	std::cout << _name << " heals " << amount << " hit points!" << std::endl;
}

ClapTrap::ClapTrap() 
{
	this->_hitPoints = 0;
	this->_maxHitPoints = 0;
	this->_energyPoints = 0;
	this->_maxEnergyPoint = 0;
	this->_level = 0;
	this->_name = "CL4P-TP";
	this->_meleeAttackDamage = 0;
	this->_rangedAttackDamage = 0;
	this->_armorDamageReduction = 0;
	std::cout << "Hey everybody, I'm Trap, Claptrap. Double oh... Trap " << this->_name << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other) 
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