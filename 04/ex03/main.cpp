#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("Ice");
	me->equip(tmp);
	tmp = src->createMateria("Cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	// std::cout << "===========================================" << std::endl;

	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// src->learnMateria(new Cure());
	// src->learnMateria(new Cure());
	// src->learnMateria(new Cure());
	// src->learnMateria(new Cure());
	// src->learnMateria(new Cure());
	// src->learnMateria(new Cure());

	// std::cout << "===========================================" << std::endl;
	
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// ICharacter* me = new Character("me");

	// AMateria* tmp;
	// tmp = src->createMateria("Ice");
	// me->equip(tmp);
	// tmp = src->createMateria("Ice");
	// me->equip(tmp);
	// tmp = src->createMateria("Ice");
	// me->equip(tmp);
	// tmp = src->createMateria("Ice");
	// me->equip(tmp);
	// tmp = src->createMateria("Ice");
	// me->equip(tmp);
	// tmp = src->createMateria("Ice");
	// me->equip(tmp);
	
	// std::cout << "===========================================" << std::endl;
	
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// ICharacter* me = new Character("me");
	// ICharacter* bob = new Character("bob");

	// me->use(0, *bob);
	// me->use(1, *bob);
	// me->use(5, *bob);

	// delete bob;
	// delete me;
	// delete src;
	
	// std::cout << "===========================================" << std::endl;
	
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// AMateria* tmp;
	// AMateria* tmp2;
	// tmp = src->createMateria("Ice");
	// tmp2 = src->createMateria("Cure");
	// *static_cast<AMateria *>(tmp2) = *static_cast<AMateria *>(tmp);

	// delete tmp;
	// delete tmp2;

	// return 0;
}