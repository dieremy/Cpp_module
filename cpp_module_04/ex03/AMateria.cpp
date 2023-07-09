#include "AMateria.hpp"


/* ORTHODOX CANONICAL FORM */
AMateria::AMateria()
{
	this->_type = "";
	// std::cout << "[AMateria] Default constructor called" << std::endl;
	return ;
}

AMateria::AMateria( AMateria const &Am )
{
	// std::cout << "[AMateria] Copy constructor called" << std::endl;
	*this = Am;
}

AMateria::AMateria( std::string const &type )
{
	this->_type = type;
}

AMateria::~AMateria()
{
	// std::cout << "[AMateria] Destructor called" << std::endl;
	return ;
}

AMateria			&AMateria::operator=( AMateria const &Am )
{
	if ( this != &Am )
		this->_type = Am._type;
	return ( *this );
}


/* METHODS */
std::string const	&AMateria::getType() const
{
	return ( this->_type );
}

void		AMateria::use( ICharacter &target )
{
	if ( this->_type == "ice" )
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if ( this->_type == "cure" )
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

// AMateria	*AMateria::clone() const = 0
// {}
