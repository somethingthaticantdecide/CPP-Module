#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int value )
{
	_value = value << _nb_of_f_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << _nb_of_f_bits));
	std::cout << "Float constructor called" << std::endl;
}

int		Fixed::toInt(void) const 
{
	return _value >> _nb_of_f_bits;
}

float	Fixed::toFloat(void) const 
{
	return ((float)_value / (1 << _nb_of_f_bits));
}

Fixed::Fixed( const Fixed &old_obj) 
{
	*this = old_obj;
	std::cout << "Copy constructor called" << std::endl;
}

int	Fixed::getRawBits(void) const 
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) 
{
	this->_value = raw;
}

Fixed	&Fixed::operator=(const Fixed &other) 
{
	std::cout << "Assignment operator called" << std::endl;
	this->_value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream	&operator<<(std::ostream &os, Fixed const &obj)
{
	return (os << obj.toFloat());
}