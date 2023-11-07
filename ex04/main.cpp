#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include "replace.hpp"

int main (int argc, char **argv)
{
	std::ifstream ifs;
	if (argc != 4)
	{
		std::cout << "The variable num is fault" << std::endl;
		std::cout << "You have to input the three variables : <filename> <source string> <destination string>" << std::endl;
		return (1);
	}
	std::string target = std::string(argv[2]);
	std::string replace = std::string(argv[3]);
	if ((target.length() <= replace.length()) && replace.find(target) != std::string::npos)
	{
		std::cout << "Please input different target and replace string" << std::endl;
		return (1);
	}
	if (std::string(argv[2]).empty())
	{
		std::cout << "You have to make sure that the second varible could not be zero" << std::endl;
		return (1);
	}
	ifs.open(argv[1]);
	if (ifs.is_open())
	{
		std::string outFile = (std::string)argv[1] + (std::string)".replace";
		std::ofstream ofs(outFile);
		if (!ofs.is_open())
		{
			std::cerr << "Failed to open outfile" << std::endl;
			ifs.close();
			return (1);
		}
		for (std::string line; std::getline(ifs, line); )
			ofs << Replace::replace(line, argv[2], argv[3]) << std::endl;
	}
	else
	{
		std::cerr << "Failed to open infile" << std::endl;
		return (1);
	}
	return (0);
}
