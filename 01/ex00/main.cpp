#include "Pony.hpp"

void	createPonyOnTheStack()
{
	Pony death("Death", "black", 50, 10);
	death.tellAboutYourself();
}

void	createPonyOnTheHeap()
{
	Pony	*war = new Pony("War", "red", 100, 15);
	if (war == NULL)
	{
		std::cout << "Error!" << std::endl;
		return ;
	}
	war->tellAboutYourself();
	delete war;
	war = NULL;
	return ;
}


int		main(void) 
{
	createPonyOnTheStack();
	std::cout << "-----------------------------" << std::endl;
	createPonyOnTheHeap();
	return 0;
}