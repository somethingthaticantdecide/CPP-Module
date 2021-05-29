#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad	: public ISquad
{
	typedef	struct	s_list
	{
		ISpaceMarine	*_warrior;
		struct s_list	*next;
	}				t_list;

	private:
		t_list		*_legion;

	public:
		Squad();
		Squad(const Squad &src);
		Squad &operator = (Squad const &obj);
		~Squad();

		virtual int	getCount() const;
		virtual		ISpaceMarine *getUnit(int) const;
		virtual int	push(ISpaceMarine *new_member);
		void		addBack(ISpaceMarine *warrior);

		void		ft_lstClear();
		int			ft_lstadd_back(ISpaceMarine *warrior);
};

#endif

