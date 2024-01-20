#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
};

Harl::~Harl(void)
{
};

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
};

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
};

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
};

void Harl::complain(std::string level)
{
	funcPtrArray f = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string arrayLevel[4] = {"debug","info","warning","error"};
	int level_int = -1;
	for (int i = 0; i < 4; i++)
	{
		if (arrayLevel[i] == level)
		{
			level_int = i;
			break;
		}
	}
	switch (level_int)
	{
		case 0:
			(this->*f[0])();
			break;
		case 1:
			(this->*f[1])();
			break;
		case 2:
			(this->*f[2])();
			break;
		case 3:
			(this->*f[3])();
			break;
		default:
			std::cout << "the level is wrong" << std::endl;
	}
};