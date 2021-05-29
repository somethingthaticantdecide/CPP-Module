#include "whatever.hpp"

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	float f1 = 0.1;
	float f2 = 42.5;
	::swap( f1, f2 );
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
	std::cout << "min( f1, f2 ) = " << ::min( f1, f2 ) << std::endl;
	std::cout << "max( f1, f2 ) = " << ::max( f1, f2 ) << std::endl;
	double l1 = -9223372036854775807;
	double l2 = 9223372036854775807;
	std::cout << "l1 = " << l1 << ", l2 = " << l2 << std::endl;
	std::cout << "min( l1, l2 ) = " << ::min( l1, l2 ) << std::endl;
	std::cout << "max( l1, l2 ) = " << ::max( l1, l2 ) << std::endl;
	return 0;
}