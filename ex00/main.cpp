#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	std::string name1 = "weijuan";
	std::string name2 = "chen";

	Zombie *zombie = newZombie(name1); //allocate the zombie on heap, dynamic memory
	zombie->announce();
	delete zombie; //free the memory
	randomChump(name2); //allocate the zombie on stack
	return (0);
}
