#include <iostream>
#include <fstream>

int replace(std::string filename, std::string str_1, std::string str_2) 
{
	size_t			find;
	std::string		read;
	std::string		outputfile = filename + ".replace";
	std::ifstream	inputstream(filename.c_str());
	std::ofstream	outputstream(outputfile.c_str());
	
	if (!inputstream || !outputstream)
		std::cerr << "File can't be opened!" << std::endl;
	else
		while (std::getline(inputstream, read))
		{
			find = read.find(str_1);
			while (find != std::string::npos)
			{
				read.replace(find, str_1.length(), str_2);
				find = read.find(str_1, find + str_2.length());
			}
			outputstream << read;
			if (!inputstream.eof())
				outputstream << std::endl;
		}
	return (0);
}


int main(int argc, char *argv[]) 
{
	std::string	filename;
	std::string	str_1;
	std::string	str_2;

	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments!" << std::endl;
		return 1;
	}
	filename = argv[1];
	str_1 = argv[2];
	str_2 = argv[3];
	if (filename.empty() || str_1.empty() || str_2.empty())
		std::cerr << "Wrong arguments!" << std::endl;
	else
		replace(filename, str_1, str_2);
	return (0);
}
