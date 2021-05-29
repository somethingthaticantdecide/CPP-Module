#ifndef DEATHCLAW_HPP
#define DEATHCLAW_HPP

#include "Enemy.hpp"

class Deathclaw : public Enemy
{
	private:
		int _damageReduction;

	public:
		Deathclaw();
		virtual ~Deathclaw();
		Deathclaw &operator = (Deathclaw const &obj);
		Deathclaw(Deathclaw const &obj);
		void takeDamage(int damage);
};

#endif