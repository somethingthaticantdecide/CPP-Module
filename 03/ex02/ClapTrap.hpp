#pragma once

#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoint;
		unsigned int	_level;
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armorDamageReduction;

	public:
		
		ClapTrap(void);
		ClapTrap(std::string name="CL4P-TP", int hitPoints = 0, int maxHitPoints = 0, int energyPoints = 0, int maxEnergyPoint = 0,
		int level = 1, int meleeAttackDamage = 0, int rangedAttackDamage = 0, int armorDamageReduction = 0);
		~ClapTrap(void);
		ClapTrap	&operator=(const ClapTrap &value );
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};
