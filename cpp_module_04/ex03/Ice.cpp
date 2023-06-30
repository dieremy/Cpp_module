#include "Ice.hpp"


/* CONSTRUCTORS & DESTRUCTORS */
Ice::Ice()
{
	std::cout << "[Ice] Default constructor called" << std::endl;
	return ;
}

Ice::Ice( Ice const &I )
{
	std::cout << "[Ice] Copy constructor called" << std::endl;
	*this = I;
	return ;
}

Ice::~Ice()
{
	std::cout << "[Ice] Destructor called" << std::endl;
	return ;
}


/* METHODS */
AMateria	*Ice::clone() const 
{
	AMateria	*ice = new Ice();

	std::cout << "[Ice] Clone constructor called" << std::endl;
	return ( ice );
}
