#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon
{
	private:

	protected:
		std::string	_name;
		int _apcost;
		int _damage;

	public:

		AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
		std::string const getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

		AWeapon &operator=(const AWeapon &object);
		AWeapon(AWeapon const &object);
};

#endif