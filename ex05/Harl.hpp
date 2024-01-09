#ifndef HARL_HPP
 #define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	public :
		void complain(std::string level);
		Harl();
		~Harl();
	private :
		typedef void(Harl::*funcPtrArray[4])();
		void info(void);
		void warning(void);
		void error(void);
		void debug(void);
};

#endif