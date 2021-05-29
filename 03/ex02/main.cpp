#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
	return (0);
}