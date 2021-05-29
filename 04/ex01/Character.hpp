#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string	name;
		int			ap;
		AWeapon		*aweapon;
		Character();

	public:
		Character(std::string const & name);
		~Character();
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const getName() const;

		int  getAp() const;
		Character(Character const & obj);
		AWeapon * getAweapon()const;
		Character & operator=(Character const & obj);
};

std::ostream &operator << (std::ostream &res, Character const &character);

#endif