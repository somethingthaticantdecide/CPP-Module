#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <string>

class Fixed
{
	private:
		int					_value;
		static const int	_nb_of_f_bits = 8;

	public:
		Fixed();
		Fixed( Fixed const &value );
		Fixed				&operator=(Fixed const &value );
		int					getRawBits( void ) const;
		void				setRawBits( int const raw );
		~Fixed();
};

#endif
