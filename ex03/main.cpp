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
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
