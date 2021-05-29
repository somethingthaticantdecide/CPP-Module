#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap	&operator=(const FragTrap &value );
		void		vaulthunter_dot_exe(std::string const & target);

		std::string randomCreateQuote(void);
		std::string randomDyingQuote(void);
		std::string randomSpecialAttack(void);
};
