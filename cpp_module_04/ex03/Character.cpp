#include "Character.hpp"


/* ORTHODOX CANONICAL FORM */
Character::Character()
{
	std::cout << "[Character] Default constructor called" << std::endl;
	return ;
}

Character::Character( std::string name )
{
	this->_name = name;
	return ;
}

Character::Character( Character const &Ch )
{
	std::cout << "[Character] Copy constructor called" << std::endl;
	*this = Ch;
	return ;
}

Character::~Character()
{
	std::cout << "[Character] Destructor called" << std::endl;
	return ;
}

Character			&Character::operator=( Character const &Ch )
{
	std::cout << "[Character] Copy assignement operator called" << std::endl;
	if ( this != &Ch )
		this->_name = Ch._name;
	return ( *this );
}


/* METHODS */
std::string const	&Character::getName() const 
{
	return ( this->_name );
}

void				Character::use( int idx, ICharacter &target ) const 
{
	
}

void				Character::equip( AMateria *Am )
{}

void				Character::unequip( int idx ) const 
{}
