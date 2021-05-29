#include "Pony.hpp"

Pony::Pony(std::string name, std::string colour ,int weight, int length)
{
	std::cout << "Here comes the new Pony!" << std::endl;
	this->_name = name;
	this->_colour = colour;
	this->_weight = weight;
	this->_length = length;
}

Pony::~Pony(void)
{
	std::cout << "R.I.P. brave pony " << _name << std::endl;
}

void Pony::tellAboutYourself()
{
	std::cout << "My name: " << this->_name << std::endl;
	std::cout << "My colout: " << this->_colour << std::endl;
	std::cout << "My weight: " << this->_weight << std::endl;
	std::cout << "My length: " << this->_length << std::endl;
}
