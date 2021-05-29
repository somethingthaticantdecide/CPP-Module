#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
	private:
		std::string	_name;
		std::string	_colour;
		int			_weight;
		int			_length;
	
	public:

		Pony(std::string _name, std::string _colour, int _weight, int  _length);
		void tellAboutYourself();
		~Pony();
};

void	createPonyOnTheHeap();
void	createPonyOnTheStack();

#endif