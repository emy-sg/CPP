#include "Zombie.hpp"

/*
 In this case we can call the parameterized constructure, while dynamique allocation for One Class:

 		Zombie  *Zombies;
 		Zombies = new Zombie(name);

 But it's not dowable for array.
*/

Zombie *zombieHorde(int N, std::string name){
	Zombie *Zombies;
	
	int	i = 0;
	
	Zombies= new Zombie[N];

	while (i < N){
		Zombies[i].set_name(name);
		i++;
	}
	return (Zombies);
}
