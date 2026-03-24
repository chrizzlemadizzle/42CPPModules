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
		Contact ();
		Contact (std::string, std::string, std::string, std:: string, std::string);
		std::string	getFirstName(void) {return firstName;};
		std::string getLastName(void) {return lastName;};
		std::string getNickName(void) {return nickName;};
		std::string getPhoneNumber(void) {return phoneNumber;};
		std::string getDarkestSecret(void) {return darkestSecret;};
};
