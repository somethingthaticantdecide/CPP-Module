#ifndef ROGUE_HPP
#define ROGUE_HPP

#include "Victim.hpp"

class Rogue : public Victim
{
	protected:
		std::string _name;
		Rogue();

	public:
		Rogue(std::string name);
		Rogue &operator=(Rogue const &object);
		Rogue(Rogue const &object);
		virtual ~Rogue();

		std::string getName() const;
		virtual void getPolymorphed() const;

};

std::ostream &operator << (std::ostream &str, const Rogue &Rogue);

#endif