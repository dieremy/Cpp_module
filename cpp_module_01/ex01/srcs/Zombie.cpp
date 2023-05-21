/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:50:57 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/21 16:34:37 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie( std::string name )
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << RED << this->_name << ": DEAD_AF..." << NONE << std::endl;
}

std::string	Zombie::set_name( std::string name )
{
	return (this->_name = name);
}

Zombie* newZombie( std::string name )
{
	Zombie	*christopherNolan;

	christopherNolan = new Zombie(name);
	return (christopherNolan);
}


void	Zombie::announce( void )
{
	std::cout << CYAN << this->_name << ": BraiiiiiiinnnzzzZ..." << NONE << std::endl;
}
