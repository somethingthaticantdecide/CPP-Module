//
// Created by johnt on 20.05.2021.
//
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// class Base
// {
//     public:
//         virtual ~Base()	{};
// };

// class A : public Base
// {
// 	~A(){};
// };

// class B : public Base
// {
// 	~B(){};
// };

// class C : public Base
// {
// 	~C(){};
// };

Base * generate(void)
{
	int rand;

	srand(time(0));
	rand = std::rand() % 3;
	if (rand == 0)
		return new (A);
	else if (rand == 1)
		return new (B);
	else
		return new (C);
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}


void identify_from_reference(Base & p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}

int main()
{
	Base *base = generate();
	std::cout << "Identify from pointer: ";
	identify_from_pointer(base);
	std::cout << "Identify from reference: ";
	identify_from_reference(*base);
	delete base;
	return (0);
}