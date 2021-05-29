#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"

class Sorcerer
{
	private:
		std::string	_name;
		std::string	_title;
		Sorcerer();

	public:

		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &object);
		Sorcerer &operator=(Sorcerer const &object);
		~Sorcerer();

		std::string getName() const;
		std::string getTitle() const;
		void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &str, const Sorcerer &sorcerer);

#endif
