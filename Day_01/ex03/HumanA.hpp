# ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA{
	private:
		std::string name;
		Weapon&		my_weapon;
	public:
		HumanA(Weapon);
		void setName(std::string);
		std::string getName(void);
		void attack(void);
};

#endif
