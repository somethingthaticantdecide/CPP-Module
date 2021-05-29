#include "SuperTrap.hpp"

int		main()
{
	SuperTrap	supy("SUPER-TP");
	supy.meleeAttack("Bloated Rakk");
	supy.rangedAttack("Bloated Rakk");
	supy.takeDamage(70);
	supy.vaulthunter_dot_exe("Psycho Zombie");

	FragTrap	fragy;
	supy.ninjaShoebox(fragy);
	std::cout << "====================================================" << std::endl;

	return (0);
}