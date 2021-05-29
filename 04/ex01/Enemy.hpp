#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <string>
#include <iostream>

class Enemy
{
	private:
	
	protected:
		int			hp;
		std::string	type;

	public:
		Enemy();
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const &obj);
		Enemy &operator = (Enemy const &obj);
		virtual ~Enemy();

		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int);
};

#endif