#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"
# include <string>

class Human
{
	private:
		Brain	_brain;

	public:
		Human();
		~Human();
		Brain	*identify();
		Brain	&getBrain();
};

#endif