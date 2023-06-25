#include "Animal.hpp"

		
/* ORTHODOX CANONICAL FORM */
Animal::Animal()
{
	this->_type = "ANIMAL";
	this->_sound = "ANIMAL SOUND";
	std::cout << this->_type << " that makes " << this->_sound << " Default constructor called" << std::endl;
}

Animal::Animal( const Animal &A )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = A;
	return ;
}

Animal::~Animal()
{
	std::cout <<  "[ANIMAL] Destructor called" << std::endl;
	return ;
}

Animal		&Animal::operator=( const Animal &A )
{
	if ( this == &A )
		return ( *this );
	this->_type = A._type;
	this->_sound = A._sound;
	return ( *this );
}


/* METHODS */
void		Animal::makeSound( void ) const
{
	std::cout << this->_type << " makes " << this->_sound << std::endl;
}

std::string	Animal::getType( void ) const
{
	return ( this->_type );
}

