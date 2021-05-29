#include "ClassContact.hpp"

std::string Contact::get_first_name() {return (first_name);}
std::string Contact::get_last_name() {return (last_name);}
std::string Contact::get_nickname() {return (nickname);}
std::string Contact::get_login() {return (login);}
std::string Contact::get_postal_addr() {return (postal_addr);}
std::string Contact::get_email_address() {return (email_addr);}
std::string Contact::get_phone_number() {return (phone_number);}
std::string Contact::get_birthday() {return (birthday_date);}
std::string Contact::get_favorite_meal() {return (favorite_meal);}
std::string Contact::get_underwear_color() {return (underwear_color);}
std::string Contact::get_darkest_secret() {return (darkest_secret);}

void	Contact::add()
{
	std::cout << "Write first name:" << std::endl;
	getline(std::cin, this->first_name);
	std::cout << "Write last name:" << std::endl;
	getline(std::cin, this->last_name);
	std::cout << "Write nickname:" << std::endl;
	getline(std::cin, this->nickname);
	std::cout << "Write login:" << std::endl;
	getline(std::cin, this->login);
	std::cout << "Write postal address:" << std::endl;
	getline(std::cin, this->postal_addr);
	std::cout << "Write email address:" << std::endl;
	getline(std::cin, this->email_addr);
	std::cout << "Write phone number:" << std::endl;
	getline(std::cin, this->phone_number);
	std::cout << "Write birthday date:" << std::endl;
	getline(std::cin, this->birthday_date);
	std::cout << "Write favorite meal:" << std::endl;
	getline(std::cin, this->favorite_meal);
	std::cout << "Write underwear color:" << std::endl;
	getline(std::cin, this->underwear_color);
	std::cout << "Write darkest secret:" << std::endl;
	getline(std::cin, this->darkest_secret);
}

std::string	shorten_the_line(std::string str)
{
	int	i;
	int	j;

	i = 0;
	while(str[i])
		i++;
	if (i <= 10)
		return (str);
	str[9] = '.';
	j = 10;
	while(j < i)
		str[j++] = '\0';;
	return (str);
}

void	add_spaces(std::string str)
{
	int			i;
	std::string res;

	i = 0;
	while(str[i])
		i++;
	if (i < 10)
		while(i++ < 10)
			std::cout << " ";
}

void	Contact::show()
{
	std::cout << "Fist Name: " << get_first_name() << std::endl;
	std::cout << "Last Name: " << get_last_name() << std::endl;
	std::cout << "Nickame: " << get_nickname() << std::endl;
	std::cout << "Login: " << get_login() << std::endl;
	std::cout << "Postal Address: " << get_postal_addr() << std::endl;
	std::cout << "Email Address: " << get_email_address() << std::endl;
	std::cout << "Phone Number: " << get_phone_number() << std::endl;
	std::cout << "Birthday: " << get_birthday() << std::endl;
	std::cout << "Favorite Meal: " << get_favorite_meal() << std::endl;
	std::cout << "Underwear Color: " << get_underwear_color() << std::endl;
	std::cout << "Darkest Secret: " << get_darkest_secret() << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
}

int	is_valid_index(std::string str, size_t size)
{
	int i;

	i = 0;
	while(str[i])
    	if(!isdigit(str[i++]))
			return (0);
	if (i == 0)
		return (0);
	i = std::stoi(str);
	if (i < 0 || i >= size)
		return (0);
	return (1);
}

static void		search(Contact Contacts[8], size_t size)
{
	size_t		i;
	std::string	input;
	
	if (size == 0)
	{
		std:: cout << "PhoneBook is empty!" << std::endl;
		return ;
	}
	std::cout << "  |    Name    |  Last name |  Nickname  |" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	i = -1;
	while (++i < size)
	{
		std::cout << std::to_string(i) << " | ";
		add_spaces(Contacts[i].get_first_name());
		std::cout << shorten_the_line(Contacts[i].get_first_name());
		std::cout << " | ";
		add_spaces(Contacts[i].get_last_name());
		std::cout << shorten_the_line(Contacts[i].get_last_name());
		std::cout << " | ";
		add_spaces(Contacts[i].get_nickname());
		std::cout << shorten_the_line(Contacts[i].get_nickname());
		std::cout << " | ";
		std::cout << std::endl;
	}
	std::cout << "Enter contact number to show or EXIT:" << std::endl;
	getline(std::cin, input);
	if (std::cin.eof() || input == "EXIT")
		return ;
	while (!is_valid_index(input, size))
	{
		std::cout << "Please enter VALID contact number to show:" << std::endl;
		getline(std::cin, input);
		if (std::cin.eof() || input == "EXIT")
			return ;
	}
	Contacts[i].show();
}

int main()
{
	int			size;
	std::string	cmd;
	Contact		Contacts[8];

	size = 0;
	while(!std::cin.eof())
	{
		std::cout << "This is My Awesome PhoneBook! Enter your command:" << std::endl;
		getline(std::cin, cmd);
		if (cmd == "EXIT")
			break;
		else if (cmd == "ADD")
		{
			if (size == 8)
			{
				std:: cout << "PhoneBook is full!" << std::endl;
				continue ;
			}
			Contacts[size] = Contact();
			Contacts[size].add();
			size++;
		}
		else if (cmd == "SEARCH")
			search(Contacts, size);
		else if (!std::cin.eof())
			std::cout << "Unknown command!" << std::endl;
	}
	return 0;
}
