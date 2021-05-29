#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap	clapy("FR4G-TP");

	clapy.meleeAttack("Bloated Rakk");
	clapy.rangedAttack("Psycho Zombie");
	clapy.takeDamage(70);
	clapy.takeDamage(30);
	clapy.beRepaired(30);
	clapy.vaulthunter_dot_exe("Tankenstein");
	clapy.takeDamage(150);
	
	ScavTrap	scavy("SC4V-TP");
	scavy.rangedAttack("Psycho Zombie");
	scavy.meleeAttack("Bloated Rakk");
	scavy.rangedAttack("Psycho Zombie");
	scavy.takeDamage(70);
	scavy.takeDamage(30);
	scavy.beRepaired(30);
	scavy.challengeNewcomer("Psycho Zombie");
	scavy.takeDamage(150);
	
	return (0);
}