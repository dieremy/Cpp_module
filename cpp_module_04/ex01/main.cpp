#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{
	const Animal	*animals[10];
	int				i;

	i = -1;
	while ( ++i < 10 )
	{
		if ( ! ( i % 2 ) )
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << std::endl;

	i = -1;
	while ( ++i < 10 )
		delete animals[i];

	return (0); 
}