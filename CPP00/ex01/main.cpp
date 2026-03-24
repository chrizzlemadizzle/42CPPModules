#include <iostream>
#include <ostream>
#include "Contact.hpp"

int main()
{
	Contact	contactA;
	Contact	contactB ("Adam", "Sandler", "Häh", "123", "Epstein");
	std::cout << contactA.getFirstName() << std::endl;
	std::cout << contactB.getFirstName() << std::endl;
	return (0);
}
