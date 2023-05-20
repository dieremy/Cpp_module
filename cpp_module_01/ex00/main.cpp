/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:20:15 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/20 17:22:19 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/Zombie.hpp"

int main()
{
	randomChump("Jennifer Aniston");
	randomChump("Beyonce");
	randomChump("Keanu Reeves");
	randomChump("Brad Pitt");
	randomChump("Marlon Brando");
	randomChump("Hanna Montana");
	randomChump("Tom Cruise");
	randomChump("Nicole Kidman");

	std::cout << "\n\n\n";

	int i = -1;
	while (++i < 8)
	{
		std::cout << i << " ";
		randomChump("Scarlett Johansson");
	}

	return (0);
}
