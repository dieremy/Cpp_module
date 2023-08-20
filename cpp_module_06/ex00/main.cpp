#include "ScalarConverter.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Number of arguments not valid." << std::endl;
		return (1);
	}
	ScalarConverter SC(av[1]);

	std::cout << SC << std::endl;
	return (0);
}
