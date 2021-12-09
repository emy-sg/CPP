#include "Zombie.hpp"

int main(){


	std::cout << "--------------------" << std::endl;

	Zombie *my_Zombie = newZombie("Emy");
	my_Zombie->annouce();
	delete(my_Zombie);

	std::cout << "--------------------" << std::endl;
	
	randomChump("Dragon");

	return (0);
}
