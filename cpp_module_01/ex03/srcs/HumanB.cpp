/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:06:46 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/28 15:21:49 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"


HumanB::HumanB( std::string name )
{
    this->_name = name;
}

HumanB::~HumanB()
{
	;
}

int HumanB::attack( void )
{
	std::cout << MAGENTA << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->Weap->getType() << NONE << std::endl;
	return (0);
}

int HumanB::setWeapon( Weapon &Weap )
{
	this->Weap = &Weap;
	this->Weap->getType();
	return (0);
}
