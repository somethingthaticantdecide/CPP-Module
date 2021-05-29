#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) 
{
	this->_name = name;
	this->_type = type;
}

Zombie::~Zombie() 
{
}

void	Zombie::setZombieType(std::string type)
{
	this->_type = type;
}

void	Zombie::setZombieName(std::string name)
{
	this->_name = name;
}


void	Zombie::announce() 
{
	std::cout << "<" << this->_name;
	std::cout << " (" << this->_type << ")> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}
