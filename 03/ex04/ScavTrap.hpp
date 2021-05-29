#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap	&operator=(const ScavTrap &value );
		void		challengeNewcomer(std::string const & target);
		std::string randomCreateQuote(void);
		std::string randomDyingQuote(void);
		std::string randomScavTrapChallenge(void);
};
