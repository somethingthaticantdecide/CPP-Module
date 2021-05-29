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

FragTrap::FragTrap(std::string name)
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoint = 100;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	std::cout << this->randomCreateQuote() << std::endl;
	
}

FragTrap::~FragTrap(void)
{
	std::cout << this->name << " dyuing with words: " << this->randomDyingQuote() << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << name << " attacks " << target << " at range, causing " << meleeAttackDamage << " points of damage!" << std::endl;;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << name << " attacks " << target << " with melee attack, causing " << meleeAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	amount -= armorDamageReduction;
	if (amount > hitPoints)
		amount = hitPoints;
	hitPoints -= amount;

	std::cout  << name << " takes " << amount << " points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (hitPoints + amount > maxHitPoints)
		amount = maxHitPoints - hitPoints;
	hitPoints += amount;
	
	std::cout  << name << " heals " << amount << " hit points!" << std::endl;
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

FragTrap	&FragTrap::operator=(const FragTrap &other) 
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

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	// srand( time(0) );
	if (this->energyPoints < 25)
		std::cout << this->name <<  " says: Crap, no more energy left!" << std::endl;
	else
	{
		this->energyPoints -= 25;
		std::cout  << name << " attacks " << target << " with " << this->randomSpecialAttack() << ", causing " << rand() % 100 << " points of damage!" << std::endl;
	}
}

FragTrap::FragTrap()
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoint = 100;
	this->level = 1;
	this->name = "FR4G-TP";
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	std::cout << this->randomCreateQuote() << std::endl;
}