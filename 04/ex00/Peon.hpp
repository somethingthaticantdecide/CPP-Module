#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
	private:
		Peon();

	public:
		Peon(std::string name);
		Peon(Peon const &object);
		Peon	&operator = (const Peon &object);
		virtual ~Peon();

		void	getPolymorphed() const;
};

#endif