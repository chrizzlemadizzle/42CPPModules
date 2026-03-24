#include "Contact.hpp"

// Constructors
Contact::Contact()
{
	firstName = "empty";
	lastName = "empty";
	nickName = "empty";
	phoneNumber = "empty";
	darkestSecret = "empty";
}

Contact::Contact(std::string a, std::string b, std::string c, std::string d, std::string e)
{
	firstName = a;
	lastName = b;
	nickName = c;
	phoneNumber = d;
	darkestSecret = e;
}
