#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	clapy("FR4G-TP");

	clapy.meleeAttack("Bloated Rakk");
	clapy.rangedAttack("Psycho Zombie");
	clapy.takeDamage(70);
	clapy.takeDamage(30);
	clapy.beRepaired(30);
	clapy.vaulthunter_dot_exe("Tankenstein");
	clapy.vaulthunter_dot_exe("Tankenstein");
	clapy.vaulthunter_dot_exe("Tankenstein");
	clapy.vaulthunter_dot_exe("Tankenstein");
	clapy.vaulthunter_dot_exe("Tankenstein");
	clapy.takeDamage(150);
	return (0);
}