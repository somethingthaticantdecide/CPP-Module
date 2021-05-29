#ifndef CHARACTER
#define CHARACTER

#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];

		Character();
	public:
		Character(std::string name);
		std::string const &getName() const;
		Character &operator = (Character const &object);
		~Character();

		Character(Character const &object);
		void equip(AMateria *m);
		void unequip(int idx);
		virtual void use(int idx, ICharacter &target);
};

#endif