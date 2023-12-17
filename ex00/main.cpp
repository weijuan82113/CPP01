#include "Zombie.hpp"
#include <string.h>

int main(void)
{
	std::string name1 = "weijuan";
	std::string name2 = "chen";

	Zombie *zombie = Zombie::newZombie(name1); //allocate the zombie on heap, dynamic memory
	zombie->announce();
	delete zombie; //free the memory
	Zombie::randomChump(name2); //allocate the zombie on stack
	return (0);
}
