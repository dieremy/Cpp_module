/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:20:15 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/06 16:23:47 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int main()
{
	Zombie z1("Scarlett Johansson");
	z1.announce();

	Zombie* z2 = newZombie("Hanna Montana");
	z2->announce();
	delete z2;

	randomChump("Beyonce");
	
	return (0);
}
