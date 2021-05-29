#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Deathclaw.hpp"
#include "Minigun.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	// std::cout << "==================================" << std::endl;

	// Enemy* sm = new SuperMutant();
	// me->attack(sm);
	// std::cout << *me;
	// me->attack(sm);
	// std::cout << *me;
	// me->recoverAP();
	// me->attack(sm);
	// me->recoverAP();
	// me->attack(sm);
	// me->recoverAP();
	// me->attack(sm);
	// me->recoverAP();
	// me->attack(sm);
	// me->recoverAP();
	// me->attack(sm);
	// me->recoverAP();
	// me->attack(sm);
	// me->recoverAP();
	// me->attack(sm);
	// me->recoverAP();
	// me->attack(sm);
	// std::cout << "==================================" << std::endl;
	
	// Enemy* dc = new Deathclaw();
	// AWeapon* mg = new Minigun();
	// me->equip(mg);
	// me->attack(dc);
	// me->recoverAP();
	// me->attack(dc);
	// me->recoverAP();
	// me->attack(dc);
	// me->recoverAP();
	// me->attack(dc);
	// me->recoverAP();
	// me->attack(dc);
	// me->recoverAP();
	// me->attack(dc);
	// me->recoverAP();
	// me->attack(dc);
	// me->recoverAP();
	// me->attack(dc);
	// me->recoverAP();
	// me->attack(dc);
	// std::cout << "==================================" << std::endl;
	
	// Character* un_me = new Character("un_me");
	// std::cout << *un_me;
	// Enemy* n_b = new RadScorpion();
	// un_me->attack(n_b);
	// std::cout << *un_me;
	// un_me->attack(n_b);
	// std::cout << *un_me;
	return 0;
}

