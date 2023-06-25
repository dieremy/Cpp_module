#include "WrongAnimal.hpp"

		
/* ORTHODOX CANONICAL FORM */
WrongAnimal::WrongAnimal()
{
	this->_type = "WrongANIMAL";
	this->_sound = "WrongANIMAL SOUND";
	std::cout << this->_type << " that makes " << this->_sound << " Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &wA )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = wA;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout <<  "[WrongANIMAL] Destructor called" << std::endl;
	return ;
}

WrongAnimal		&WrongAnimal::operator=( const WrongAnimal &wA )
{
	if ( this == &wA )
		return ( *this );
	this->_type = wA._type;
	this->_sound = wA._sound;
	return ( *this );
}


/* METHODS */
void		WrongAnimal::makeSound( void ) const
{
	std::cout << this->_type << " makes " << this->_sound << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return ( this->_type );
}
