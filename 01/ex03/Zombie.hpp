#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string	_name;
		std::string	_type;
	
	public:

		Zombie();
		~Zombie();
		Zombie(std::string name, std::string type);
		void	setZombieType(std::string type);
		void	setZombieName(std::string name);
		void	announce();
};

#endif