#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	int i;

	i = -1;
	while (++i < 4)
		this->source[i] = NULL;
}

MateriaSource::~MateriaSource() {
	int i;

	i = -1;
	while (++i < 4)
		if (this->source[i] != NULL)
			delete this->source[i] ;
}

MateriaSource::MateriaSource(MateriaSource const &object) {
	*this = object;
}

MateriaSource &MateriaSource::operator = (MateriaSource const &object) {
	int i;

	if (this == &object)
		return (*this);
	i = -1;
	while (++i < 4)
	{
		if (this->source[i] != NULL)
			delete source[i];
		this->source[i] = NULL;
	}
	i = -1;
	while (++i < 4)
		this->source[i] = object.source[i]->clone();
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {
	int i;

	if (!m)
		return ;
	i = -1;
	while (++i < 4)
	{
		if (this->source[i] == NULL)
		{
			this->source[i] = m;
			// std::cout << "* learn " << m->getType() << std::endl;
			return ;
		}
	}
}

AMateria*  MateriaSource::createMateria(std::string const &type) {
	int i;

	i = -1;
	while (++i < 4)
		if (this->source[i] != NULL && this->source[i]->getType() == type)
			return (this->source[i]->clone());
	return (NULL);
}