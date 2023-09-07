#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie(void);
		void setName(std::string name);
		std::string getName();
		void announce();
		static Zombie* zombieHorde(int N, std::string name);
	private:
		std::string _name;
};

#endif
