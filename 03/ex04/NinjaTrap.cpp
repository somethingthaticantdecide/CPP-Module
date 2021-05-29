#include "NinjaTrap.hpp"

std::string NinjaTrap::randomCreateQuote(void)
{
	const std::string Quotes[5] = 
	{
		"I'm a robot ninja...",
		"Roses are red and/Violets are blue/Wait... how many syllables was that?",
		"Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!",
		"You versus me! Me versus you! Either way!",
		"Trouncy, flouncy... founcy... those aren't words."
	};
	return Quotes[std::rand() % 5];
}

std::string NinjaTrap::randomDyingQuote(void)
{
	const std::string Quotes[5] = 
	{
		"NOOO!",
		"No fair! I wasn't ready.",
		"Argh arghargh death gurgle gurglegurgle urgh... death.",
		"Crap happens.",
		"Poop."
	};
	return Quotes[std::rand() % 5];
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoint = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << this->randomCreateQuote() << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << this->_name << " dyuing with words: " << this->randomDyingQuote() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap target)
{
	std::cout << this->_name << " says to: " << target.get_name() << " You jerks have NO idea what you're in for!"  << std::endl; 
}

void	NinjaTrap::ninjaShoebox(FragTrap target)
{
	std::cout << this->_name << " says: You wanna fight with me?! " << target.get_name() << " Put 'em up!.. Put 'em up?"  << std::endl; 
}

void	NinjaTrap::ninjaShoebox(ScavTrap target)
{
	std::cout << this->_name << " says: " << target.get_name() << " YOU! ARE! SCARY! and runnung away!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap target)
{
	std::cout << this->_name << " coming to " << target.get_name() << " and doing the Secret handshake!" << std::endl;
}

NinjaTrap::NinjaTrap() : ClapTrap("N1NJ4-TP")
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoint = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << "NinjaTrap constructor initialized!" << std::endl;
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &other) 
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