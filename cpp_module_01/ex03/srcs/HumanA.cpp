/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:04:17 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/28 15:13:30 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &Weapon )
{
    // humana bob needs name and kind of weapon
	
    this->_name = name;
    this->Weap = &Weapon;
	this->Weap->getType();
}

HumanA::~HumanA()
{
}

int	HumanA::attack( void )
{
    //    <name> attacks with their <weapon type>
	
	std::cout << CYAN << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->Weap->getType() << NONE << std::endl;
	return (0);
}
