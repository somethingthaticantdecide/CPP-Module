#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

void	AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &object) {
	std::cout << "* teleports from space *" << std::endl;
	*this = object;
}

AssaultTerminator 	&AssaultTerminator::operator = (AssaultTerminator const &object) {
	if (this == &object)
        return *this;
	return (*this);
}

ISpaceMarine	*AssaultTerminator::clone() const {
	return (new AssaultTerminator(*this));
}
