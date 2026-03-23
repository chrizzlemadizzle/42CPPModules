#include <cctype>
#include <iostream>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			std::cout << static_cast<char>(
				std::toupper(static_cast<unsigned char>(argv[i][j])));
			j++;
		}
		i++;
	}
	std::cout << std::endl;
}
