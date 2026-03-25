#include "PhoneBook.hpp"
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

PhoneBook::PhoneBook()
	:	id(0),
		size(0)
{
}

void	PhoneBook::addContact()
{
	std::string	first, last, nick, phone, secret;
	std::cout << "Please enter first name:";
	std::getline(std::cin, first);
	std::cout << "Please enter first name:";
	std::getline(std::cin, last);
	std::cout << "Please enter nick name:";
	std::getline(std::cin, nick);
	std::cout << "Please enter phone number:";
	std::getline(std::cin, phone);
	std::cout << "Please enter darkest secret:";
	std::getline(std::cin, secret);

	contacts[id] = Contact(first, last, nick, phone, secret);
	if (size < 8)
		size++;
	id = (id + 1) % 8;
	std::cout << "Successfully added a new contact." << std::endl;
}

std::string	formatText(const std::string &text)
{
	if (text.length() > 10)
		return (text.substr(0, 9) + ".");
	return (text);
}

void	PhoneBook::displayContactTable() const
{
	int	i = 0;

	std::cout	<< std::right << std::setw(10) << "index" << "|"
				<< std::right << std::setw(10) << "first name" << "|"
				<< std::right << std::setw(10) << "last name" << "|"
				<< std::right << std::setw(10) << "nick name" << std::endl;

	while (i < size)
	{
		std::cout	<< std::right << std::setw(10) << i << "|"
					<< std::right << std::setw(10) << formatText(contacts[i].getFirstName()) << "|"
					<< std::right << std::setw(10) << formatText(contacts[i].getLastName()) << "|"
					<< std::right << std::setw(10) << formatText(contacts[i].getNickName()) << std::endl;
		i++;
	}
}

void	PhoneBook::search() const
{
	int	index;

	std::cout << std::setfill(' ');
	displayContactTable();
	std::cout	<< "Please enter index to display full contact information: ";
	std::cin >> index;
	std::cout << std::left << std::setw(15) << "first name:" << contacts[index].getFirstName() << std::endl;
	std::cout << std::left << std::setw(15) << "last name:" << contacts[index].getLastName() << std::endl;
	std::cout << std::left << std::setw(15) << "nick name:" << contacts[index].getNickName() << std::endl;
	std::cout << std::left << std::setw(15) << "phone number:" << contacts[index].getPhoneNumber() << std::endl;
	std::cout << std::left << std::setw(15) << "darkest secret:" << contacts[index].getDarkestSecret() << std::endl;
}


