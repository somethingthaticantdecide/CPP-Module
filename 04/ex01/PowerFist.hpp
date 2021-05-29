#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	private:

	public:
		PowerFist();
		PowerFist(PowerFist const & obj);
		virtual ~PowerFist();
		PowerFist & operator=(PowerFist const & obj);
		virtual void attack() const ;
};

#endif