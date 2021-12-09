#include <iostream>
#include <iomanip>

// No dynamic allocation && can't store more than 8 contacts.
// ==> If a ninth contact is added, replace the oldest contact.
// ADD command, SEARCH command, EXIT command.

class Contact
{
	private:
		std::string	first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact();
		~Contact();
};

class Phonebook{
	private:
		contact contacts[8];
	public:
		Phonebook();
		~Phonebook();
		int count;
};


void add(Phonebook contacts){
	if
}

void search(){
	int i;

	i = 0;
	while (i < 8)
	{
		std::cout << "Index      " << " | " << "First name" << " | " << "Last name " << " | " << "Nickname  " << " |" << std::endl
	}
}

int main()
{
	Phonebook contacts;

	while (1)
	{
		std::string command;

		std::cin >> command;
		if (command.compare("EXIT") == 0)
			return (0);
		if (command.compare("SEARCH") == 0)
			search(contacts);
		else if (command.compare("ADD") == 0)
			add(contacts);
		else
		{
			std::cout << "ERROR ARGUMENT" << std::cout;
			return (1);
		}
	}
	return (0);
}
/*
 int main()
{
	std::string name;

	std::cin >> name;
	if (name.length() > 10)
	{
		std::string str = name.substr(0, 9);
		std::cout << std::left << std::setw(9) << str << '.' << std::endl;
	}
	else
		std::cout << std::left << std::setw(10) << name << std::endl;
}*/

/*int main()
{

	while (1)
	{
		contact	new_contact;
		std::cin << "The first name: " << new_contact.firstname << std::endl;
		std::cin << "The last name: " << new_contact.last << std::endl;
		std::cin << "The nickname: " << new_contact.nickname << std::endl;
		std::cin << "The phone number: " << new_contact.phone_number << std::endl;
		std::cin << "The darkest secret: " << new_contact.dark  est_secret << std::endl;
	}
	return (0);
}*/

