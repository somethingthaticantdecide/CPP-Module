#include "Human.hpp"

Human::Human() {}

Human::~Human() {}

Brain	*Human::identify() { return this->_brain.identify(); }

Brain	&Human::getBrain() { return this->_brain;}
