/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:26:53 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/06 16:16:15 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie	jenniferLopez(name);

	// jenniferLopez = newZombie(name);
	// jenniferLopez.setName(name);
	jenniferLopez.announce();
	// jenniferLopez->~Zombie();
}
