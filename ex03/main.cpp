#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <stdlib.h>

__attribute__((destructor)) static void destructor(void) {
    system("leaks -q Human");
}

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		//std::cout << "test2:" << club.getType() << std::endl;
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		//std::cout << "test1:" << club.getType() << std::endl;
		jim.attack();
	}
	return 0;
}
