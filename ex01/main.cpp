#include "Zombie.hpp"

int main ()
{
	std::string name = "weijuan";
	int N = 10;
	Zombie* zombie = Zombie::zombieHorde(N, name);
	for (int i=0; i < N; ++i)
	{
		zombie[i].announce();
	}
	delete[] zombie;
}
