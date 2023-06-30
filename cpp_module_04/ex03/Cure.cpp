#include "Cure.hpp"


/* CONSTRUCTORS & DESTRUCTORS */
Cure::Cure()
{
	std::cout << "[Cure] Default constructor called" << std::endl;
	return ;
}

Cure::Cure( Cure const &C )
{
	std::cout << "[Cure] Copy constructor called" << std::endl;
	*this = C;
	return ;
}

Cure::~Cure()
{
	std::cout << "[Cure] Destructor called" << std::endl;
	return ;
}


/* METHODS */
AMateria	*Cure::clone() const 
{
	AMateria	*cure = new Cure();

	std::cout << "[Cure] Clone constructor created" << std::endl;
	return ( cure );
}
