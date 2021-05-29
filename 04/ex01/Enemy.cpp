#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type) {}

Enemy::~Enemy() {}

Enemy::Enemy(Enemy const &obj) {
	*this = obj;
}

std::string Enemy::getType() const { return (this->type); }

int Enemy::getHP() const { return (this->hp); }

Enemy &Enemy::operator = (Enemy const &object) {
	if (this == &object)
        return (*this);
	this->hp = object.hp;
	this->type = object.type;
	return (*this);
}

void Enemy::takeDamage(int damage) {
	if (this->hp == 0)
		return ;
	if (this->hp > damage)
		this->hp -= damage;
	else
		{
			this->hp = 0;
			delete this;
		}
}
