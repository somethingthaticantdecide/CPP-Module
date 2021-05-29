#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &obj) {
    *this = obj;
}

RadScorpion &RadScorpion::operator = (RadScorpion const &object)
{
	if (this == &object)
        return (*this);
	this->hp = object.hp;
	this->type = object.type;
	return (*this);
}
