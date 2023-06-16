/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:38:55 by parrot            #+#    #+#             */
/*   Updated: 2023/06/16 14:39:03 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ORTHODOX CANONICAL FORM */
ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name )
{
	this->_name = name;
	this->_hPoints = 10;
	this->_ePoints = 10;
	this->_aDamage = 0;
	std::cout << "ClapTrap " << this->_name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &ct )
{
	std::cout << "ClapTrap " << this->_name << " copy constructor called" << std::endl;
	*this = ct;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destructor called" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &ct )
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if ( this == &ct )
		return ( *this );

	setName( ct.getName() );
	setHp( ct.getHp() );
	setEp( ct.getEp() );
	setAd( ct.getAd() );
	return ( *this );
}


/* CLASS METHODS */
void		ClapTrap::attack( const std::string& target )
{
	this->_ePoints -= 1;	
	if ( this->_ePoints < 1 || this->_hPoints < 1 )
	{
		std::cout << "ClapTrap " << this->_name << " can't attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_aDamage << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage( unsigned int amount )
{
	this->_hPoints -= amount;
	if ( this->_ePoints < 1 || this->_hPoints < 1 )
	{
		std::cout << "ClapTrap " << this->_name << " DEAD AF!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void		ClapTrap::beRepaired( unsigned int amount )
{
	this->_ePoints -= 1;
	this->_hPoints += amount;
	if ( this->_ePoints < 1 || this->_hPoints < 1 )
	{
		std::cout << "ClapTrap " << this->_name << " has no energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " was repaired with " << amount << " points!" << std::endl;
}


/* SETTERS */
void		ClapTrap::setName( std::string name )
{
	this->_name = name;
}

void		ClapTrap::setHp( int hp )
{	
	this->_hPoints = hp;
}

void		ClapTrap::setEp( int ep )
{
	this->_ePoints = ep;
}

void		ClapTrap::setAd( int ad )
{
	this->_aDamage = ad;
}


/* GETTERS */
std::string	ClapTrap::getName( void ) const
{
	return ( this->_name );
}

int			ClapTrap::getHp( void ) const
{
	return ( this->_hPoints );
}

int			ClapTrap::getEp( void ) const
{
	return ( this->_ePoints );
}

int			ClapTrap::getAd( void ) const
{
	return ( this->_aDamage );
}

