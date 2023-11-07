#include <iostream>
#include <string>

int main()
{
	std::string stringVAR = "HI THIS IS BRAIN";
	std::string stringVAR2 = "HI THIS IS BRAIN";
	std::string* stringPTR = &stringVAR;
	std::string& stringREF = stringVAR;
	std::cout << "The memory address of the string variable : " << &stringVAR << std::endl;
	std::cout << "The memory address of stringPTR : " << &stringPTR << std::endl;
	std::cout << "The memory address of stringREF : " << &stringREF << std::endl;
	std::cout << "The value of the string variable : " << stringVAR << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
}
