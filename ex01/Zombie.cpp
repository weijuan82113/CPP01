#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "constructor start" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " : destoryed" << std::endl;
};

void Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string Zombie::getName()
{
	return (this->_name);
}

void Zombie::announce()
{
	std::cout << "Zombie:" << getName() << "!" << std::endl;
};
