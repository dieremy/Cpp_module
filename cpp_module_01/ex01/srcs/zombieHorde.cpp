/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:55:18 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/21 16:48:28 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie( void )
{}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*gianlucaVacchi;
	int		i;

	gianlucaVacchi = new Zombie[N];
	if (N < 0)
	{
		std::cout << RED << "EXIT, N too low" << std::endl;
		return (NULL);
	}
	i = -1;
	while (++i < N)
		gianlucaVacchi[i].set_name(name);

	return (gianlucaVacchi);
}