#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	private:
		
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &object);
		virtual ~PlasmaRifle();
		PlasmaRifle &operator = (PlasmaRifle const &object);
		virtual void attack() const ;
};

#endif