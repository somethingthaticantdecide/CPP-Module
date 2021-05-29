#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &old_obj) 
{
	*this = old_obj;
	std::cout << "Copy constructor called" << std::endl;
}

int	Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) 
{
	this->_value = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

Fixed&	Fixed::operator = (const Fixed &other) 
{
	this->_value = other.getRawBits();
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}
