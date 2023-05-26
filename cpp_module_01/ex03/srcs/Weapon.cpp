/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:58:26 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/26 17:14:15 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon( std::string type )
{
    this->_type = type;
}

Weapon::~Weapon()
{
	;
}

void	Weapon::setType( std::string str )
{
    this->_type = str;
}

std::string	Weapon::getType( void ) const
{
    return (this->_type);
}