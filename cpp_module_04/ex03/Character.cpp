#include "Character.hpp"


/* ORTHODOX CANONICAL FORM */
Character::Character()
{
	this->_name = "";
	this->_len = 0;
	return ;
}

Character::Character( std::string name )
{
	this->_name = name;
	return ;
}

Character::Character( Character const &Ch )
{
	// std::cout << "[Character] Copy constructor called" << std::endl;
	for ( int i = 0; i < Ch._len; i++ )
		delete Ch._inventory[i];
	*this = Ch;
	this->_len = 0;
	return ;
}

Character::~Character()
{
	// std::cout << "[Character] Destructor called" << std::endl;
	return ;
}

Character			&Character::operator=( Character const &Ch )
{
	// std::cout << "[Character] Copy assignement operator called" << std::endl;
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
	if ( idx >= 4 || idx > this->_len )
		return ;
	this->_inventory[idx]->AMateria::use(target);
}

void				Character::equip( AMateria *Am )
{
	if ( this->_len >= 4 )
		return ;
	this->_inventory[this->_len] = Am;
	this->_len++;
}

void				Character::unequip( int idx )
{
	if ( idx >= 4 || idx > this->_len )
		return ;

	if ( this->_inventory[idx] )
	{
		delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
}
