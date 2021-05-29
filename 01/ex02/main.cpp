#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent	*zEventOnHeap = new ZombieEvent();
	zEventOnHeap->setZombieType("onHeap");
	Zombie* zombie_one = zEventOnHeap->newZombie("Bob");
	zombie_one->announce();
	delete zEventOnHeap;

	ZombieEvent	zEventOnStack;
	zEventOnStack.setZombieType("onStack");
	Zombie* zombie_two = zEventOnStack.newZombie("Hubrecht");
	zombie_two->announce();

	zEventOnStack.setZombieType("Random");
	zEventOnStack.randomChump();

	delete zombie_one;
	delete zombie_two;
	return 0;
}
