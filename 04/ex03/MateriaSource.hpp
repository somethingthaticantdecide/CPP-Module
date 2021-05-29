#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	source[4];

	public:

		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &object);
		MateriaSource &operator = (MateriaSource const &object);
		virtual void learnMateria(AMateria *);
		virtual AMateria* createMateria(std::string const &type);
};

#endif