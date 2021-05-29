#ifndef CURE_HPP
#define  CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:

	public:
		Cure();
		Cure(Cure const &object);
		Cure &operator = (Cure const &object);
		~Cure();

		AMateria *clone() const;
		virtual void use(ICharacter& target);
};

#endif