#ifndef MINIGUN_HPP
#define MINIGUN_HPP

#include "AWeapon.hpp"

class Minigun : public AWeapon
{
	private:
		
	public:
		Minigun();
		Minigun(Minigun const &object);
		virtual ~Minigun();
		Minigun &operator = (Minigun const &object);
		virtual void attack() const ;
};

#endif