//
// Created by johnt on 20.05.2021.
//
#include <cstdlib>
#include <ctime>
#include <iostream>

struct Data { std::string rand_str_1; int rand_int; std::string rand_str_2; };

std::string	_getRandomString()
{
	std::string	zString(10, '\0');
	const char	alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

	for (std::string::iterator i = zString.begin(); i != zString.end(); i++)
		*i = alphanum[rand() % sizeof(alphanum)];
	return zString;
}


void * serialize(void)
{
    // Data	*raw = new Data;

	// srand(time(0));
    // raw->rand_str_1 = _getRandomString();
    // raw->rand_int = rand() % INT_MAX;
    // raw->rand_str_2 = _getRandomString();
    // std::cout << "Random string 1: " << raw->rand_str_1 << std::endl;
	// std::cout << "Random integer: " << raw->rand_int << std::endl;
	// std::cout << "Random string 2: "<< raw->rand_str_2 << std::endl;
	// return (reinterpret_cast<void *>(raw));

	char			*raw = (char *)malloc(52);
	std::string		str_1;
	int				rand_int;
	std::string		str_2;

	srand(time(0));
	str_1 = _getRandomString();
    rand_int = rand() % INT_MAX;
	str_2 = _getRandomString();
	memcpy(raw, &str_1, 24);
	memcpy(raw + 24, &rand_int, 4);
	memcpy(raw + 24 + 4, &str_2, 24);
    std::cout << "Random string 1: " << str_1 << std::endl;
	std::cout << "Random integer: " << rand_int << std::endl;
	std::cout << "Random string 2: "<< str_2 << std::endl;
	return (raw);
}

Data * deserialize(void * raw)
{
    // Data	*data = reinterpret_cast<Data *>(raw);
	// std::cout << "Deserialized string 1: " << data->rand_str_1 << std::endl;
	// std::cout << "Deserialized integer: " << data->rand_int << std::endl;
	// std::cout << "Deserialized string 2: " << data->rand_str_2 << std::endl;

	
	Data	*data = new Data;
	char	*raw_data = reinterpret_cast<char *>(raw);
	data->rand_str_1 = *reinterpret_cast<std::string *>(raw_data);
	data->rand_int = *reinterpret_cast<int *>(raw_data + sizeof(std::string));
	data->rand_str_2 = *reinterpret_cast<std::string *>(raw_data + sizeof(std::string) + sizeof(int));
	std::cout << "Deserialized string 1: " << data->rand_str_1 << std::endl;
	std::cout << "Deserialized integer: " << data->rand_int << std::endl;
	std::cout << "Deserialized string 2: " << data->rand_str_2 << std::endl;


    return (data);
}

int	main()
{
    void*	serialized_raw = serialize();
    Data*	deserialized_raw = deserialize(serialized_raw);

    delete[] reinterpret_cast<char *>(serialized_raw);
    delete deserialized_raw;

    return 0;
}