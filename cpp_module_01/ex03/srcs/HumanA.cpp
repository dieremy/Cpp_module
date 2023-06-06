/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:04:17 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/06 16:52:40 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &Weapon )
{	
    this->_name = name;
    this->Weap = &Weapon;
	this->Weap->getType();
}

HumanA::~HumanA()
{
	;
}

int	HumanA::attack( void )
{
	std::cout << CYAN << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->Weap->getType() << NONE << std::endl;
	return (0);
}
