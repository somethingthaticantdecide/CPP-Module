#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	private:
		int _damageReduction;

	public:
		SuperMutant();
		virtual ~SuperMutant();
		SuperMutant &operator = (SuperMutant const &obj);
		SuperMutant(SuperMutant const &obj);
		void takeDamage(int);
};

#endif