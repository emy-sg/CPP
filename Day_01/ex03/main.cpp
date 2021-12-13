#include "Weapon.hpp"

int main(){
	Weapon gun;

	gun.setType("Gun Emoji");
	const std::string& ref_to_weapon = gun.getType();
	std::cout << ref_to_weapon << std::endl;

	std::cout << "-----------------------------------------------------" << std::endl;

	HumanA emy();

	return (0);
}
