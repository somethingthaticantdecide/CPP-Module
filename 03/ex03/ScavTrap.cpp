#include "ScavTrap.hpp"

std::string ScavTrap::randomCreateQuote(void)
{
	const std::string Quotes[5] = 
	{
		"Hey everybody! Check out my package!",
		"Let's get this party started!",
		"It's about to get magical!",
		"I'm a sexy dinosaur! Rawr!",
		"If I had veins, they'd be popping out right now!"
	};
	return Quotes[std::rand() % 5];
}

std::string ScavTrap::randomDyingQuote(void)
{
	const std::string Quotes[5] = 
	{
		"You look like something a skag barfed up!",
		"I'm too pretty to die!",
		"Crap!",
		"I'll never go back to the bad place!",
		"I have many regrets!"
	};
	return Quotes[std::rand() % 5];
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 30, 15, 3)
{
	std::cout << this->randomCreateQuote() << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->_name << " dyuing with words: " << this->randomDyingQuote() << std::endl;
}

std::string ScavTrap::randomScavTrapChallenge(void)
{
	const std::string Quotes[5] = 
	{
		"Find Princess Fluffybutt!",
		"Kill the King of Orcs in the Badass round of Magic Slaughter!",
		"Find the 3 hidden Vault Symbols!",
		"Learn what your fellow Crimson Raiders get up to while you're off saving planet!",
		"Make a fiery sacrifice to the Savage god!"
	};
	return Quotes[std::rand() % 5];
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	if (this->_energyPoints < 25)
		std::cout << this->_name << ": No energy left! " << std::endl;
	else
	{
		this->_energyPoints -= 25;
		std::cout << _name << " challenge " << target << " to " << this->randomScavTrapChallenge() << std::endl;
	}
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other) 
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

ScavTrap::ScavTrap() : ClapTrap("SC4V-TP", 100, 100, 50, 50, 1, 30, 15, 3)
{
	std::cout << this->randomCreateQuote() << std::endl;
}