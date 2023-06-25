#include "Cat.hpp"


/* ORTHODOX CANONICAL FORM */
Cat::Cat()
{
	this->Animal::_type = "Cat";
	this->Animal::_sound = "Miao";
	this->_Brain = new Brain();
	std::cout << "[CAT] default constructor called" << std::endl;
	return ;
}

Cat::Cat( const Cat &C ) : Animal( C )
{
	std::cout << "[CAT] copy constructor called" << std::endl;
	*this = C;
	return ;
}

Cat::~Cat()
{
	delete this->_Brain;
	std::cout << "[CAT] destructor called" << std::endl;
}

Cat		&Cat::operator=( const Cat &C )
{
	if ( this == &C )
		return ( *this );
	this->_type = C._type;
	this->_sound = C._sound;
	return ( *this );
}


/* METHODS */
void		Cat::makeSound( void ) const
{
	std::cout << this->_type << " makes " << this->_sound << std::endl;
}

std::string	Cat::getType( void ) const
{
	return ( this->_type );
}