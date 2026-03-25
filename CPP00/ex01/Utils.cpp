#include "Utils.hpp"
#include <iomanip>
#include <iostream>

void	printSeperator()
{
	std::cout << std::setw(54) << std::setfill('#') << "" << "\n";
	std::cout << std::setfill(' ');
}

void	printDefaultPrompt()
{
	printSeperator();
	std::cout << "Please enter one of these commands: ADD, SEARCH, EXIT.\n";
	std::cout << ">";
}

std::string	formatText(const std::string &text)
{
	if (text.length() > 10)
		return (text.substr(0, 9) + ".");
	return (text);
}
