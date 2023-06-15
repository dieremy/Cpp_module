/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:24:01 by parrot            #+#    #+#             */
/*   Updated: 2023/06/15 17:09:28 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// • Name, which is passed as parameter to a constructor
// • Hit points (100), represent the health of the ClapTrap
// • Energy points (50)
// • Attack damage (20)
// ScavTrap will also have its own special capacity:
// void guardGate();
// This member function will display a message informing
// that ScavTrap is now in Gate keeper mode

/* ORTHODOX CANONICAL FORM*/
ScavTrap::ScavTrap()
{}

ScavTrap::ScavTrap( std::string name )
{
	this->_name = name;
	this->_hPoints = 100;
	this->_ePoints = 50;
	this->_aDamage = 20;
	this->setName( this->_name );
	this->setHp( this->_hPoints );
	this->setEp( this->_ePoints );
	this->setAd( this->_aDamage );
	std::cout << "ScavTrap " << this->_name \
	<< " default constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &st ): ClapTrap( st )
{
	*this = st;
	std::cout << "ScavTrap " << this->_name \
	<< " copy constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name \
	<< " destructor called" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap &st )
{
	std::cout << \
	"ScavTrap copy assignment operator called" << std::endl;
	if ( this == &st )
		return ( *this );

	this->_name = st._name;
	this->_hPoints = st._hPoints;
	this->_ePoints = st._ePoints;
	this->_aDamage = st._aDamage;
	return ( *this );
}

/* CLASS METHODS */
void		ScavTrap::attack( const std::string& target )
{
	this->_ePoints -= 1;
	if (this->_ePoints < 1 || this->_hPoints < 1)
	{
		std::cout << "ScavTrap " << this->_name \
		<< " can't attack" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << \
	", causing " << this->_aDamage << " points of damage!" << std::endl;
}

void		ScavTrap::takeDamage( unsigned int amount )
{
	this->_hPoints -= 1;
	if (this->_ePoints < 1 || this->_hPoints < 1)
	{
		std::cout << "ScavTrap " << this->_name \
		<< " DEAF AF!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " takes " << amount \
	<< " points of damage!" << std::endl;
}

void		ScavTrap::beRepaired( unsigned int amount )
{
	this->_ePoints -= 1;
	this->_hPoints += amount;
	if ( this->_ePoints < 1 || this->_hPoints < 1 )
	{
		std::cout << "ScavTrap " << this->_name << \
		" has no energy!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " was repaired with " \
	<< amount << " points!" << std::endl;
}

void		ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name \
	<< " is now in Gate keeper mode" << std::endl;
}
