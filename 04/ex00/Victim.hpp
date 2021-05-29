#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
	protected:
		std::string _name;
		Victim();

	public:
		Victim(std::string name);
		Victim &operator=(const Victim &obj);
		Victim(const Victim &obj);
		virtual ~Victim();

		std::string getName() const;
		virtual void getPolymorphed() const;

};

std::ostream &operator << (std::ostream &str, const Victim &Victim);

#endif