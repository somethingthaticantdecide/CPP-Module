#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	
	// std::cout << "=====================================" << std::endl;
	// ISpaceMarine* mike = new TacticalMarine;
	// ISpaceMarine* phill = new AssaultTerminator;
	// ISquad* vlc2 = new Squad;
	// vlc2->push(phill);
	// vlc2->push(mike);
	// vlc2->push(phill);
	// vlc2->push(phill);
	// vlc2->push(phill);
	// vlc2->push(NULL);
	// for (int i = 0; i < vlc2->getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = vlc2->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }
	
	// std::cout << "=====================================" << std::endl;
	// ISquad	*vlc3 = new Squad;
	// *static_cast<Squad *>(vlc3) = *static_cast<Squad *>(vlc);
	// *static_cast<Squad *>(vlc3) = *static_cast<Squad *>(vlc);
	// *static_cast<Squad *>(vlc3) = *static_cast<Squad *>(vlc);

	// for (int i = 0; i < vlc3->getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = vlc3->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }
	// delete vlc;
	// delete vlc2;
	// delete vlc3;
	// while (1) ;
	// return 0;
}