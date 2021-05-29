#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>

class FragTrap
{
	private:
		std::string			name;
		unsigned	int		hitPoints;
		unsigned	int		maxHitPoints;
		unsigned	int		energyPoints;
		unsigned	int		maxEnergyPoint;
		unsigned	int		level;
		unsigned	int		meleeAttackDamage;
		unsigned	int		rangedAttackDamage;
		unsigned	int		armorDamageReduction;

	public:

		FragTrap();
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap	&operator=(const FragTrap &value );
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		vaulthunter_dot_exe(std::string const & target);

		std::string randomCreateQuote(void);
		std::string randomDyingQuote(void);
		std::string randomSpecialAttack(void);
};
