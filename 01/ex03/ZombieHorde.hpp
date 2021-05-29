#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include "Zombie.hpp"
# include <iostream>
# include <string>

class ZombieHorde
{
	private:
		int			_size;
		int			_type;
		Zombie		*_horde;
		std::string	_getRandomName();
	
	public:

		ZombieHorde(int size);
		~ZombieHorde();
		void	announce();
};

#endif