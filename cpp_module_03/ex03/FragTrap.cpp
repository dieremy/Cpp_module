#include "FragTrap.hpp"


/* ORTHODOX CANONICAL FORM */
FragTrap::FragTrap()
{
	std::cout << "[FragTrap] " << this->_name \
	<< " Default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name )
{
	this->_name = name;
	this->_hPoints = 100;
	this->_ePoints = 100;
	this->_aDamage = 30;
	std::cout << "[FragTrap] " << this->_name \
	<< " constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap &ft ) : ClapTrap( ft )
{
	std::cout << "[FragTrap] " << this->_name \
	<< " copy constructor called" << std::endl;
	*this = ft;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] " << this->_name \
	<< " Destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=( const FragTrap &ft )
{
	std::cout << "[FragTrap] copy assignment operator called" \
	<< std::endl;
	if ( this == &ft )
		return ( *this );
	this->_name = ft._name;
	this->_hPoints = ft._hPoints;
	this->_ePoints = ft._ePoints;
	this->_aDamage = ft._aDamage;
	return ( *this );
}


/* METHODS */
void		FragTrap::highFiveGuys( void )
{
	std::cout << "[FragTrap] " << this->_name \
	<< " displays a positive high fives request on the standard input" << std::endl;
}