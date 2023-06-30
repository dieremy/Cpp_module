#include "MateriaSoyurce.hpp"


/* ORTHODOX CANONICAL FORM */
MateriaSource::MateriaSource()
{
	std::cout << "[MateriaSource] Default constructor called" << std::endl;
	return ;
}

MateriaSource::MateriaSource( MateriaSource const &Ms )
{
	std::cout << "[MateriaSource] Copy constructor called" << std::endl;
	*this = Ms;
	return ;
}

MateriaSource::~MateriaSource()
{
	std::cout << "[MateriaSource] Destructor called" << std::endl;
}

MateriaSource	&MateriaSource::operator=( MateriaSource const &Ms )
{
	if ( this != &Ms )
		//this = &Ms
	return ( *this );
}


/* METHODS */
AMateria		*MateriaSource::createMateria( std::string const & )
{
	// functionCreate
}

void			MateriaSource::learnMateria( AMateria* )
{
	// functionLearn
}
