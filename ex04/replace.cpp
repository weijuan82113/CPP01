#include "replace.hpp"
#include <sstream>
#include <iostream>

std::string Replace::replace(const std::string& line, std::string target, std::string replace)
{
	std::string ret_str = line;
	std::string::size_type replacePosition = 0;
	while ((replacePosition = ret_str.find(target)) != std::string::npos)
	{
		ret_str.erase(replacePosition, target.size());
		ret_str.insert(replacePosition, replace);
	}
	return (ret_str);
}
