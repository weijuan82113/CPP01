#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon(void)
{

};

const std::string& Weapon::getType() const
{
	return(this->_type);
};

void Weapon::setType(const std::string& type)
{
	this->_type = type;
};


