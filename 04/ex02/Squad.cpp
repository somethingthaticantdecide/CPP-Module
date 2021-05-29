#include "Squad.hpp"

Squad::Squad() : _legion(NULL) {}

Squad::~Squad() {
	ft_lstClear();
}

ISpaceMarine	*Squad::getUnit(int index) const {
	t_list *temp;

	temp = this->_legion;
	while (temp && index--)
		temp = temp->next;
	if (temp)
		return temp->_warrior;
	return (NULL);
}

Squad &Squad::operator = (Squad const &obj) {
	int	i;
	int	count;

	i = -1;
	count = obj.getCount();
	ft_lstClear();
	while (++i < count)
		this->push(obj.getUnit(i)->clone());
	return (*this);
}

void Squad::ft_lstClear() {
	t_list	*temp;
	t_list	*next;

	temp = _legion;
	while (temp)
	{
		next = temp->next;
		delete temp->_warrior;
		delete temp;
		temp = next;
	}
	_legion = NULL;
}

int Squad::getCount() const
{
	t_list *temp;
	size_t res;

	res = 0;
	temp = this->_legion;
	while (temp)
	{
		temp = temp->next;
		res++;
	}
	return res;
}

int	Squad::ft_lstadd_back(ISpaceMarine *push_warrior) {
	t_list *temp;
	size_t res;

	res = 1;
	temp = _legion;
	while (temp->next)
	{
		if (temp->_warrior == push_warrior)
			return getCount();
		temp = temp->next;
		res++;
	}
	if (temp->_warrior == push_warrior)
		return res;
	temp->next = new t_list();
	temp->next->_warrior = push_warrior;
	temp->next->next = NULL;

	return (res + 1);
}

int	Squad::push(ISpaceMarine *push_warrior)
{
	if (push_warrior == NULL)
		return (getCount());
	else if (_legion == NULL)
	{
		_legion = new t_list();
		_legion->_warrior = push_warrior;
		_legion->next = NULL;
		return (1);
	}
	else 
		return (ft_lstadd_back(push_warrior));
}
