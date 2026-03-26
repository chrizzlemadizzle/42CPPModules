#include "PhoneBook.hpp"
#include "Utils.hpp"
#include <iomanip>
#include <ios>
#include <iostream>
#include <sstream>
#include <string>

PhoneBook::PhoneBook()
	:	id(0),
		size(0)
{
}

void	PhoneBook::addContact()
{
	std::string	first;
	std::string last;
	std::string nick;
	std::string phone;
	std::string secret;

	if (!readNonEmptyField("Please enter first name:", first))
		return ;
	if (!readNonEmptyField("Please enter last name:", last))
		return ;
	if (!readNonEmptyField("Please enter nick name:", nick))
		return ;
	if (!readNonEmptyField("Please enter phone number:", phone))
		return ;
	if (!readNonEmptyField("Please enter darkest secret:", secret))
		return ;

	contacts[id] = Contact(first, last, nick, phone, secret);
	if (size < 8)
		size++;
	id = (id + 1) % 8;
	std::cout << "Successfully added a new contact.\n";
}

void	PhoneBook::printContactTable() const
{
	int	i = 0;

	std::cout	<< std::right << std::setw(10) << "index" << "|"
				<< std::right << std::setw(10) << "first name" << "|"
				<< std::right << std::setw(10) << "last name" << "|"
				<< std::right << std::setw(10) << "nick name" << "\n";

	while (i < size)
	{
		std::cout	<< std::right << std::setw(10) << i << "|"
					<< std::right << std::setw(10) << formatText(contacts[i].getFirstName()) << "|"
					<< std::right << std::setw(10) << formatText(contacts[i].getLastName()) << "|"
					<< std::right << std::setw(10) << formatText(contacts[i].getNickName()) << "\n";
		i++;
	}
}

bool	readIndex(int& index, int size)
{
	std::string			line;
	std::istringstream	iss;
	char				extra;

	if (!std::getline(std::cin, line))
		return false;

	iss.str(line);
	if (!(iss >> index) || (iss >> extra))
	{
		std::cout << "Invalid index.\n";
		return false;
	}
	if (index < 0 || index >= size)
	{
		std::cout << "Index out of range.\n";
		return false;
	}
	return true;
}

void	PhoneBook::search() const
{
	int	index;

	if (size == 0)
	{
		std::cout << "No Contacts in PhoneBook yet.\n";
		return ;
	}
	printSeperator();
	printContactTable();
	std::cout << "Please enter index to display full contact information:\n" << ">";
	if (!readIndex(index, size))
		return ;
	printSeperator();
	std::cout << std::left << std::setw(15) << "first name:" << contacts[index].getFirstName() << "\n";
	std::cout << std::left << std::setw(15) << "last name:" << contacts[index].getLastName() << "\n";
	std::cout << std::left << std::setw(15) << "nick name:" << contacts[index].getNickName() << "\n";
	std::cout << std::left << std::setw(15) << "phone number:" << contacts[index].getPhoneNumber() << "\n";
	std::cout << std::left << std::setw(15) << "darkest secret:" << contacts[index].getDarkestSecret() << "\n";
}


