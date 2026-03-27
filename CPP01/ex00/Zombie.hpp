#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		void	announce(void) { std::cout << name << ": " << "BraiiiiiiinnnzzzZ...\n"; };
};

#endif
