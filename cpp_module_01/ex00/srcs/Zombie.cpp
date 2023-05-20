/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:23:59 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/20 17:53:15 by robegarc         ###   ########.fr       */
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


void	Zombie::announce( void )
{
	std::cout << CYAN << this->_name << ": BraiiiiiiinnnzzzZ..." << NONE << std::endl;
}
