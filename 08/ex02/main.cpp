#include "mutantstack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl; 
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << s.size() << std::endl;

	MutantStack<float> mstack1;
	mstack1.push(5);
	mstack1.push(17.1);
	std::cout << mstack1.top() << std::endl; 
	mstack1.pop();
	std::cout << mstack1.size() << std::endl;
	mstack1.push(3);
	mstack1.push(5);
	mstack1.push(737);
	mstack1.push(0);
	MutantStack<float>::iterator it1 = mstack1.begin();
	MutantStack<float>::iterator ite1 = mstack1.end();
	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	std::stack<float> s1(mstack1);
	std::cout << s1.size() << std::endl;

	MutantStack<std::string> mstack2;
	mstack2.push("qwe");
	mstack2.push("push");
	std::cout << mstack2.top() << std::endl; 
	mstack2.pop();
	std::cout << mstack2.size() << std::endl;
	mstack2.push("uno");
	mstack2.push("dos");
	mstack2.push("tres");
	mstack2.push("quadro");
	MutantStack<std::string>::iterator it2 = mstack2.begin();
	MutantStack<std::string>::iterator ite2 = mstack2.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::stack<std::string> s2(mstack2);
	std::cout << s2.size() << std::endl;
	return 0;

	// MutantStack<int> mstack;
	// mstack.push(5);
	// mstack.push(17);
	// mstack.pop();
	// mstack.push(3);
	// mstack.push(5);
	// mstack.push(737);
	// mstack.push(0);
	// MutantStack<int>::iterator it = mstack.begin();
	// MutantStack<int>::iterator ite = mstack.end();
	// ++it;
	// --it;
	// while (it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }

	// MutantStack<int> rmstack;
	// rmstack.push(5);
	// rmstack.push(17);
	// rmstack.pop();
	// rmstack.push(3);
	// rmstack.push(5);
	// rmstack.push(737);
	// rmstack.push(0);
	// MutantStack<int>::reverse_iterator rit = rmstack.rbegin();
	// MutantStack<int>::reverse_iterator rite = rmstack.rend();
	// ++rit;
	// --rit;
	// while (rit != rite)
	// {
	// 	std::cout << *rit << std::endl;
	// 	++rit;
	// }
}