#ifndef ICE_HPP
#define  ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:

	public:
		Ice();
		Ice(Ice const &object);
		Ice &operator = (Ice const &object);
		~Ice();

		AMateria * clone()const;
		virtual void use(ICharacter& target);
};

#endif