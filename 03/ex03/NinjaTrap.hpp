#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:

		NinjaTrap(void);
		NinjaTrap(std::string name);
		~NinjaTrap(void);
		NinjaTrap	&operator=(const NinjaTrap &value );
		std::string randomCreateQuote(void);
		std::string randomDyingQuote(void);
		void		ninjaShoebox(ClapTrap target);
		void		ninjaShoebox(FragTrap target);
		void		ninjaShoebox(ScavTrap target);
		void		ninjaShoebox(NinjaTrap target);
};
