#include <iostream>

int	main(void)
{
	std::string	brain_str("HI THIS IS BRAIN");
	std::string	*brain_p = &brain_str;
	std::string	&brain_r = brain_str;

	std::cout << *brain_p << std::endl << brain_r << std::endl;
	return 0;
}
