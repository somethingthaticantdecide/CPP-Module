#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <string>
# include <math.h>

class Fixed
{
	private:
		int					_value;
		static const int	_nb_of_f_bits = 8;

	public:
		Fixed();
		Fixed( Fixed const &value );
		Fixed (const int value);
		Fixed (const float value);
		float				toFloat( void) const;
		int					toInt( void) const;
		Fixed				&operator=(Fixed const &value );
		int					getRawBits( void ) const;
		void				setRawBits( int const raw );
		~Fixed();
};

std::ostream	&operator<<(std::ostream	&out, const Fixed	&self);

#endif
