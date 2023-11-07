#ifndef WEAPON_HPP
 #define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		const std::string& getType() const;
		void setType(const std::string& type);
	private:
		std::string _type;
};

#endif
