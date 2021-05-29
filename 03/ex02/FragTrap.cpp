#include "FragTrap.hpp"

std::string FragTrap::randomCreateQuote(void)
{
	const std::string Quotes[5] = 
	{
		"Let's get this party started!",
		"Glitching weirdness is a term of endearment, right?",
		"Recompiling my combat code!",
		"This time it'll be awesome, I promise!",
		"Look out everybody! Things are about to get awesome!"
	};
	return Quotes[std::rand() % 5];
}

std::string FragTrap::randomDyingQuote(void)
{
	const std::string Quotes[5] = 
	{
		"I'll die the way I lived: annoying!",
		"This could've gone better!",
		"I'm leaking!",
		"Robot down!",
		"Come back here! I'll gnaw your legs off!"
	};
	return Quotes[std::rand() % 5];
}

FragTrap::FragTrap() : ClapTrap("FR4G-TP", 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << this->randomCreateQuote() << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << this->randomCreateQuote() << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << this->_name << " dyuing with words: " << this->randomDyingQuote() << std::endl;
}

std::string FragTrap::randomSpecialAttack(void)
{
	const std::string Quotes[5] = 
	{
		"Hyperiooooon Punch",
		"Funzerker",
		"Meat Unicycle",
		"Love bullets",
		"Mechromagician"
	};
	return Quotes[std::rand() % 5];
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_energyPoints < 25)
		std::cout << this->_name <<  " says: Crap, no more energy left!" << std::endl;
	else
	{
		this->_energyPoints -= 25;
		std::cout  << _name << " attacks " << target << " with " << this->randomSpecialAttack() << ", causing " << rand() % 100 << " points of damage!" << std::endl;
	}
}

FragTrap	&FragTrap::operator=(const FragTrap &other) 
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