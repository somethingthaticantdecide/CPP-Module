#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : public virtual FragTrap, public virtual NinjaTrap
{
	public:
		SuperTrap();
		SuperTrap(std::string name);
		~SuperTrap();
		SuperTrap	&operator=(const SuperTrap &value );
};

#endif