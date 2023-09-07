#include "Zombie.hpp"
#include <string.h>

void Zombie::randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}
