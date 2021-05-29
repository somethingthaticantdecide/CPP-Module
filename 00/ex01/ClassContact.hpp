#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <regex>

class Contact {

public:

	std::string get_first_name();
	std::string get_last_name();
	std::string get_nickname();
	std::string get_login();
	std::string get_postal_addr();
	std::string get_email_address();
	std::string get_phone_number();
	std::string get_birthday();
	std::string get_favorite_meal();
	std::string get_underwear_color();
	std::string get_darkest_secret();
	void add();
	void show();

private:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_addr;
	std::string	email_addr;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
};
