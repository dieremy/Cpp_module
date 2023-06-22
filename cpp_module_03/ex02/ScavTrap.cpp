#include "ScavTrap.hpp"

/* ORTHODOX CANONICAL FORM */
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "[ScavTrap] " << this->_name \
	<< " default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name )
{
	this->_name = name;
	this->_hPoints = 100;
	this->_ePoints = 50;
	this->_aDamage = 20;
	std::cout << "[ScavTrap] " << this->_name \
	<< " constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &st ) : ClapTrap( st )
{
	*this = st;
	std::cout << "[ScavTrap] " << this->_name \
	<< " copy constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] " << this->_name \
	<< " destructor called" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap &st )
{
	std::cout << \
	"[ScavTrap] copy assignment operator called" << std::endl;
	if ( this == &st )
		return ( *this );

	this->_name = st._name;
	this->_hPoints = st._hPoints;
	this->_ePoints = st._ePoints;
	this->_aDamage = st._aDamage;
	return ( *this );
}


/* CLASS METHODS */
void		ScavTrap::guardGate( void )
{
	std::cout << "[ScavTrap] " << this->_name \
	<< " is now in Gate keeper mode" << std::endl;
}


// • Name, which is passed as parameter to a constructor
// • Hit points (100), represent the health of the ClapTrap
// • Energy points (50)
// • Attack damage (20)
// ScavTrap will also have its own special capacity:
// void guardGate();
// This member function will display a message informing
// that ScavTrap is now in Gate keeper mode