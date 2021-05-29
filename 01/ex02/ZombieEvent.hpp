#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP
# include "Zombie.hpp"

class ZombieEvent
{
	private:

		std::string	_type;
		std::string	_getRandomName();
	
	public:

		ZombieEvent();
		~ZombieEvent();
		Zombie*	newZombie(std::string zName);
		void	setZombieType(std::string zType);
		void	randomChump();
};

#endif