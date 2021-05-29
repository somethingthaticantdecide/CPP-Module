#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		~NinjaTrap(void);
		NinjaTrap	&operator=(const NinjaTrap &value );

		std::string randomCreateQuote(void);
		std::string randomDyingQuote(void);
		void	ninjaShoebox(ClapTrap target);
		void	ninjaShoebox(FragTrap target);
		void	ninjaShoebox(ScavTrap target);
		void	ninjaShoebox(NinjaTrap target);
};

#endif