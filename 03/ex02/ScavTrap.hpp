#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap	&operator=(const ScavTrap &value );
		void		challengeNewcomer(std::string const & target);

		std::string randomCreateQuote(void);
		std::string randomDyingQuote(void);
		std::string randomScavTrapChallenge(void);
};
