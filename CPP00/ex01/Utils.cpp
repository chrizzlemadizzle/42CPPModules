#include "Utils.hpp"
#include <cctype>
#include <cstddef>
#include <iomanip>
#include <iostream>
#include <string>

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

bool	isBlank(const std::string &s)
{
	size_t	i = 0;

	while (i < s.length())
	{
		if (!std::isspace(static_cast<unsigned char>(s[i])))
			return (false);
		i++;
	}
	return (true);
}

bool	readNonEmptyField(const std::string &prompt, std::string &value)
{
	std::string	input;

	while (true)
	{
		std::cout << prompt;
		if (!std::getline(std::cin, input))
			return (false);
		if (!isBlank(input))
		{
			value = input;
			return (true);
		}
		std::cout << "Field must not be emtpy.\n";
	}
}
