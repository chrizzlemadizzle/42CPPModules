#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		id;
		int		size;
		void	printContactTable() const;

	public:
		PhoneBook();
		void	addContact();
		void	search() const;
};

#endif
