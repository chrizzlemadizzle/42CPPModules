#include <cstdio>
#include <iostream>
#include <ostream>
#include <string>
#include "PhoneBook.hpp"
#include "Utils.hpp"

int main()
{
	PhoneBook	phonebook;
	std::string	userinput;

	std::cout << "Welcome to PhoneBook!" << std::endl;
	while (1)
	{
		printDefaultPrompt();
		std::getline(std::cin, userinput);
		if (userinput == "ADD")
			phonebook.addContact();
		else if (userinput == "SEARCH")
			phonebook.search();
		else if (userinput == "EXIT")
			break ;
		else
			std::cout << "Unknown Command.\n";
	}
	return (0);
}
