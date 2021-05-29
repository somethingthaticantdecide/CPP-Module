#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() 
{
}

ZombieEvent::~ZombieEvent() 
{
}

void	ZombieEvent::setZombieType(std::string zType) 
{
	this->_type = zType;
}

Zombie*	ZombieEvent::newZombie(std::string zName) 
{
	return new Zombie(zName, this->_type);
}

std::string	ZombieEvent::_getRandomName()
{
	std::string		zName(10, '\0');
	const char		alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

	for (std::string::iterator i = zName.begin(); i != zName.end(); i++)
		*i = alphanum[rand() % sizeof(alphanum)];
	return zName;
}

void	ZombieEvent::randomChump()
{
	std::string	zName = this->_getRandomName();

	Zombie	zChump = Zombie(zName, this->_type);
	zChump.announce();
}

