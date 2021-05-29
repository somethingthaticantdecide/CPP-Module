#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:

	FragTrap();
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap	&operator=(const FragTrap &value );
	void		vaulthunter_dot_exe(std::string const & target);

	std::string randomCreateQuote(void);
	std::string randomDyingQuote(void);
	std::string randomSpecialAttack(void);
};

#endif