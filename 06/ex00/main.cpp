//
// Created by johnt on 20.05.2021.
//
#include <iostream>
#include <math.h>

#define INF (1.0 / 0.0)

inline bool isinf(double n) {
	return (n == INF);
}

inline bool isnan(double x) {
	return (x != x);
}

void toChar(float _data)
{
    if (isnan(_data) || isinf(_data) || isinf(-_data))
        std::cout << "char: impossible" << std::endl;
    else if (std::isprint(_data))
        std::cout << "char: \'" << (char)_data << '\'' << std::endl ;
    else
        std::cout << "char: Non displayable" << std::endl;
}

void toInt(float _data)
{
	if (isnan(_data) || isinf(_data) || isinf(-_data))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(_data) << std::endl;
}

void toFloat(float _data)
{
    if (isnan(_data))
        std::cout << "float: nanf" << std::endl;
    else
	{
		if (_data == int(_data)) // floor
			std::cout << "float: " << static_cast<float>(_data) << ".0f" << std::endl;
		else
			std::cout << "float: " << static_cast<float>(_data) << "f" << std::endl;
	}
}

void toDouble(float _data)
{
	if (isnan(_data))
		std::cout << "double: nan" << std::endl;
	else if (isinf(_data) || isinf(-_data))
		std::cout << "double: " << static_cast<double>(_data) << std::endl;
	else
	{
		if (_data == double(_data)) // floor
			std::cout << "double: " << static_cast<double>(_data) << ".0" << std::endl;
		else
			std::cout << "double: " << static_cast<double>(_data) << std::endl;
	}
}

int main(int argc, char **argv)
{
    float   _data;

    if (argc == 2) {
		if (std::strlen(argv[1]) == 1 && !std::isdigit(argv[1][0]) && std::isprint(argv[1][0]))
			_data = static_cast<int>(argv[1][0]);
		else
			_data = atof(argv[1]);

		toChar(_data);
		toInt(_data);
		toFloat(_data);
		toDouble(_data);
	}
    else
        std::cout << "Only one string representation of a C++ literal value as a parameter" << std::endl;
    return (0);
}
