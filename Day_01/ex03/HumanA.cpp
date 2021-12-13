#include "HumanA.hpp"

HumanA::HumanA(Weapon my_weapon){
	setType(my_weapon);
}

void HumanA::setName(std::string name){
	this->name = name;
}

std::string HumanB::getName(){
	return name;
}

void HumanA::attack(){
	std::cout << name << " " << "attacks with his" << " " << my_weapon.getType() << endl;
}
