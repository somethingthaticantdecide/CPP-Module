#include "ZombieHorde.hpp"
#include "Zombie.hpp"

std::string	ZombieHorde::_getRandomName()
{
	std::string		zName(10, '\0');
	const char		alpha_num[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

	for (std::string::iterator i = zName.begin(); i != zName.end(); i++)
		*i = alpha_num[rand() % sizeof(alpha_num)];
	return zName;
}

ZombieHorde::ZombieHorde(int size)
{
	int i;

	this->_horde = new Zombie[size];
	this->_size = size;
	i = 0;
	while (i < this->_size)
	{
		this->_horde[i].setZombieType("Horde");
		this->_horde[i].setZombieName(this->_getRandomName());
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->_horde;
}

void	ZombieHorde::announce()
{
	int i;
	i = -1;
	while (++i < this->_size)
		this->_horde[i].announce();
}