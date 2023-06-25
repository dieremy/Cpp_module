#include "Dog.hpp"


/* ORTHODOX CANONICAL FORM */
Dog::Dog()
{
	this->_type = "Dog";
	this->_sound = "Bau";
	this->_Brain = new Brain();
	std::cout << "[DOG] default constructor called" << std::endl;
	return ;
}

Dog::Dog( const Dog &D ) : Animal( D )
{
	std::cout << "[DOG] copy constructor called" << std::endl;
	*this = D;
	return ;
}

Dog::~Dog()
{
	delete this->_Brain;
	std::cout << "[DOG] destructor called" << std::endl;
}

Dog		&Dog::operator=( const Dog &D )
{
	if ( this == &D )
		return ( *this );
	this->_type = D._type;
	this->_sound = D._sound;
	return ( *this );
}


/* METHODS */
void		Dog::makeSound( void ) const
{
	std::cout << this->_type << " makes " << this->_sound << std::endl;
}

std::string	Dog::getType( void ) const
{
	return ( this->_type );
}