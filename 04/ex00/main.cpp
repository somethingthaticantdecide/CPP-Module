#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Rogue.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	
	Rogue Edwin_VanCleef("Edwin VanCleef");
	std::cout << Edwin_VanCleef;
	robert.polymorph(Edwin_VanCleef);
	return 0;
}