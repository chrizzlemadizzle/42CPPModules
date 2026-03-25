#include "Contact.hpp"

// Constructors
Contact::Contact() :
	firstName(""),
	lastName (""),
	nickName (""),
	phoneNumber (""),
	darkestSecret ("")
{
}

Contact::Contact(const std::string &first,
				const std::string &last,
				const std::string &nick,
				const std::string &phone,
				const std::string &secret)
	:	firstName(first),
		lastName(last),
		nickName(nick),
		phoneNumber(phone),
		darkestSecret(secret)
{
}
