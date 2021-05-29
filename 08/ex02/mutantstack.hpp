#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <deque>
#include <stack>

template<
    class T
>
class MutantStack : public std::stack<T>
{
	private:

	public:
		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::reverse_iterator reverse_iterator;

		MutantStack() {};
		MutantStack(MutantStack const &other) { *this = other; }
		~MutantStack() {};

		MutantStack &operator=(MutantStack const &other)
		{
			this->c = other.c;
			return *this;
		}
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
		reverse_iterator rbegin()
		{
			return this->c.rbegin();
		}
		reverse_iterator rend()
		{
			return this->c.rend();
		}
};

#endif
