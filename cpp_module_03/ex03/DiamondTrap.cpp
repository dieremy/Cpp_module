#include "DiamondTrap.hpp"


/* ORTHODOX CANONICAL FORM  */
DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "[DiamondTrap] " << this->_name \
	<< " Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" ), ScavTrap( name ), FragTrap( name )
{
	this->ClapTrap::setName( name + "_clap_name" );
	this->_name = name;
	this->_hPoints = this->FragTrap::getHp();
	this->_ePoints = this->ScavTrap::getEp();
	this->_aDamage = this->FragTrap::getAd();
	this->ClapTrap::setHp( this->_hPoints );
	this->ClapTrap::setEp( this->_ePoints );
	this->ClapTrap::setAd( this->_aDamage );

	std::cout << "[DiamondTrap] " << this->_name \
	<< " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &dt ) : ClapTrap( dt ), ScavTrap( dt ), FragTrap( dt )
{
	std::cout << "[DiamondTrap] " << this->_name \
	<< " copy costructor called" << std::endl;
	*this = dt;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] " << this->_name \
	<< " destructor called" << std::endl;
}

DiamondTrap		&DiamondTrap::operator=( const DiamondTrap &dt )
{
	std::cout << "[DiamondTrap] " << this->_name 
	<< " copy assignement operator called" << std::endl;
	if ( this == &dt )
		return ( *this );
	this->_name = dt._name;
	this->_hPoints = dt._hPoints;
	this->_ePoints = dt._ePoints;
	this->_aDamage = dt._aDamage;
	return ( *this );
}


/* METHODS */
void		DiamondTrap::whoAmI( void )
{
	std::cout << "[DiamondTrap] " << this->_name \
	<< " has got " << this->ClapTrap::getName() << std::endl;
}

void		DiamondTrap::attack( const std::string &target )
{
	this->ScavTrap::attack( target );
}
