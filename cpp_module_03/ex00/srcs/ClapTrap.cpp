/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 14:05:25 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/10 00:03:19 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

void		ClapTrap::attack( const std::string& target )
{
	if (this->_energyPoints < 1 || this->_hitPoints < 1)
		return ;
	this->_energyPoints -= 1;
	std::cout << "[CLAPTRAP] " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage" << std::endl;
}

void		ClapTrap::takeDamage( unsigned int amount )
{
	this->_hitPoints -= amount;
	std::cout << "[CLAPTRAP] " << this->_name << " takes " << amount << " points of damage" << std::endl;
}

void		ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_energyPoints < 1 || this->_hitPoints < 1)
		return ;
	this->_hitPoints += amount;
	std::cout << "[CLAPTRAP] " << this->_name << " repair itself from  " << amount << " points of damage" << std::endl;
}

void		ClapTrap::setName( std::string name )
{
	this->_name = name;
}

void		ClapTrap::setHp( int hp )
{
	this->_hitPoints = hp;
}

void		ClapTrap::setEp( int ep )
{
	this->_energyPoints = ep;
}

void		ClapTrap::setAd( int ad )
{
	this->_attackDamage = ad;
}

std::string	ClapTrap::getName( void )
{
	return (this->_name);
}

int			ClapTrap::getHp( void )
{
	return (this->_hitPoints);
}

int			ClapTrap::getEp( void )
{
	return (this->_energyPoints);
}

int			ClapTrap::getAd( void )
{
	return (this->_attackDamage);
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &cp )
{
	this->_name = cp._name;
	this->_hitPoints = cp._hitPoints;
	this->_energyPoints = cp._energyPoints;
	this->_attackDamage = cp._attackDamage;
	
	return (*this);
}

ClapTrap::ClapTrap()
{
	this->_name = "unnamed";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "[CLAPTRAP] " << this->_name << " borned" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &cp )
{
	std::cout << "[CLAPTRAP] " << this->_name << " copy borned" << std::endl;
	*this = cp;
}

ClapTrap::ClapTrap( std::string name )
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "[CLAPTRAP] " << this->_name << " appearad" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[CLAPTRAP] " << this->_name << " disappearad" << std::endl;
}
