#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>

class ScavTrap
{
	private:
	
		unsigned	int			hitPoints;
		unsigned	int			maxHitPoints;
		unsigned	int			energyPoints;
		unsigned	int			maxEnergyPoint;
		unsigned	int			level;
		std::string name;
		unsigned	int			meleeAttackDamage;
		unsigned	int			rangedAttackDamage;
		unsigned	int			armorDamageReduction;

	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap	&operator=(const ScavTrap &value );
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		challengeNewcomer(std::string const & target);

		std::string randomCreateQuote(void);
		std::string randomDyingQuote(void);
		std::string randomScavTrapChallenge(void);
};
