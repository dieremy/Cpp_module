#include "MateriaSource.hpp"


/* ORTHODOX CANONICAL FORM */
MateriaSource::MateriaSource()
{
	for ( int i = 0; i < 4; i++ )
		this->_inventory[i] = NULL;
	// std::cout << "[MateriaSource] Default constructor called" << std::endl;
	return ;
}

MateriaSource::MateriaSource( MateriaSource const &Ms )
{
	// std::cout << "[MateriaSource] Copy constructor called" << std::endl;
	*this = Ms;
	return ;
}

MateriaSource::~MateriaSource()
{
	for ( int i = 0; i < 4; i++ )
		if ( this->_inventory[i] )
			delete this->_inventory[i];
	return ;
	// std::cout << "[MateriaSource] Destructor called" << std::endl;
}

MateriaSource	&MateriaSource::operator=( MateriaSource const &Ms )
{
	if ( this != &Ms )
	{
		for ( int i = 0; i < 4; i++ )
			this->_inventory[i] = Ms._inventory[i];
	}

	return ( *this );
}


/* METHODS */
AMateria		*MateriaSource::createMateria( std::string const & type )
{
	for ( int i = 0; i < 4; i++ )
	{
		if ( this->_inventory[i] && this->_inventory[i]->getType() == type )
			return ( this->_inventory[i]->clone() );
	}

	return ( NULL );
}

void			MateriaSource::learnMateria( AMateria* Am )
{
	for ( int i = 0; i < 4; i++ )
		if ( !this->_inventory[i] )
		{
			this->_inventory[i] = Am;
			return ;
		}
}


// • learnMateria(AMateria*)
// Copies the Materia passed as a parameter and store it in memory so it can be cloned
// later. Like the Character, the MateriaSource can know at most 4 Materias. They
// are not necessarily unique.
// • createMateria(std::string const &)
// Returns a new Materia. The latter is a copy of the Materia previously learned by
// the MateriaSource whose type equals the one passed as parameter. Returns 0 if
// the type is unknown.