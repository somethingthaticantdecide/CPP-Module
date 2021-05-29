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

ScavTrap::ScavTrap(std::string name)
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoint = 50;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	std::cout << this->randomCreateQuote() << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->name << " dyuing with words: " << this->randomDyingQuote() << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << name << " attacks " << target << " at range, causing " << meleeAttackDamage << " points of damage!" << std::endl;;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << name << " attacks " << target << " with melee attack, causing " << meleeAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	amount -= armorDamageReduction;
	if (amount > hitPoints)
		amount = hitPoints;
	hitPoints -= amount;

	std::cout << name << " takes " << amount << " points of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (hitPoints + amount > maxHitPoints)
		amount = maxHitPoints - hitPoints;
	hitPoints += amount;
	
	std::cout << name << " heals " << amount << " hit points!" << std::endl;
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

ScavTrap	&ScavTrap::operator=(const ScavTrap &other) 
{
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoint = other.maxEnergyPoint;
	this->level = other.level;
	this->name = other.name;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
	return (*this);
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	// srand( time(0) );
	if (this->energyPoints < 25)
		std::cout << this->name <<  " says: Crap, no more energy left!" << std::endl;
	else
	{
		this->energyPoints -= 25;
		std::cout << name << " challenge " << target << " to " << this->randomScavTrapChallenge() << std::endl;
	}
}

ScavTrap::ScavTrap()
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoint = 50;
	this->level = 1;
	this->name = "SC4V-TP";
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	std::cout << this->randomCreateQuote() << std::endl;
}
