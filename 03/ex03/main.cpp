#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main()
{
	FragTrap	fragy("FR4G-TP");
	fragy.meleeAttack("Bloated Rakk");
	fragy.rangedAttack("Bloated Rakk");
	fragy.takeDamage(70);
	fragy.takeDamage(30);
	fragy.vaulthunter_dot_exe("Psycho Zombie");
	std::cout << "====================================================" << std::endl;

	ScavTrap	scavy("SC4V-TP");
	scavy.meleeAttack("Psycho Zombie");
	scavy.rangedAttack("Psycho Zombie");
	scavy.takeDamage(70);
	scavy.beRepaired(30);
	scavy.challengeNewcomer("Psycho Zombie");
	std::cout << "====================================================" << std::endl;

	ClapTrap	clapy("CL4P-TP");
	clapy.meleeAttack("Bloated Rakk");
	clapy.rangedAttack("Bloated Rakk");
	clapy.takeDamage(70);
	clapy.takeDamage(30);
	std::cout << "====================================================" << std::endl;

	NinjaTrap	n4ru_tp("N1NJ4-TP");
	n4ru_tp.rangedAttack("Psycho Zombie");
	n4ru_tp.meleeAttack("Psycho Zombie");
	n4ru_tp.takeDamage(46);
	n4ru_tp.beRepaired(50);
	n4ru_tp.ninjaShoebox(fragy);
	n4ru_tp.ninjaShoebox(scavy);
	n4ru_tp.ninjaShoebox(clapy);
	n4ru_tp.ninjaShoebox(n4ru_tp);
	return (0);
}