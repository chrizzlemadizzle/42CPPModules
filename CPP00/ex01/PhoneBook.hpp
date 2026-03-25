#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		id;
		int		size;
		void	displayContactTable() const;

	public:
		PhoneBook();
		void	addContact();
		void	search() const;
};
