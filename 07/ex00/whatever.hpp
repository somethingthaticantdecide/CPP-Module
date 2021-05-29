#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <class Type> void swap (Type &a, Type &b) {
    Type temp = a;
    a = b;
    b = temp;
}

template <class Type> Type min (Type a, Type b) {
    if (a < b)
		return a;
    return b;
}

template <class Type> Type max (Type a, Type b) {
    if (a > b)
        return a;
	return b;
}

#endif