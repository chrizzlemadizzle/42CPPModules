#include <iostream>
#include <ostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"

int main()
{
	PhoneBook	phonebook;
	std::string	userinput;

	std::cout << "Welcome to PhoneBook!" << std::endl;
	while (1)
	{
		std::cout << std::setw(54) << std::setfill('#') << "" << std::endl;
		std::cout << "Please enter one of these commands: ADD, SEARCH, EXIT.\n";
		std::cout << ">";
		std::getline(std::cin, userinput);
		if (userinput == "ADD")
			phonebook.addContact();
		else if (userinput == "SEARCH")
			phonebook.search();
		else if (userinput == "EXIT")
		{
			std::cout << "Lets exit!\n";
		}
	}
	return (0);
}
