/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:26:53 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/20 17:11:44 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie	*jenniferLopez;

	jenniferLopez = newZombie(name);
	jenniferLopez->announce();
	jenniferLopez->~Zombie();
}
