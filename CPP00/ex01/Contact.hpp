#include <string>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		Contact();
		Contact(const std::string &first,
				const std::string &last,
				const std::string &nick,
				const std::string &phone,
				const std::string &secret);

		const std::string	&getFirstName(void) const { return firstName; };
		const std::string	&getLastName(void) const { return lastName; };
		const std::string	&getNickName(void) const { return nickName; };
		const std::string	&getPhoneNumber(void) const { return phoneNumber; };
		const std::string	&getDarkestSecret(void) const { return darkestSecret; };
};
