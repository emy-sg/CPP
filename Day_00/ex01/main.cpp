#include <iostream>

// No dynamic allocation && can't store more than 8 contacts.
// ==> If a ninth contact is added, replace the oldest contact.
// ADD command, SEARCH command, EXIT command.

class contact
{
	public:
		std::string	first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

int main()
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
}

