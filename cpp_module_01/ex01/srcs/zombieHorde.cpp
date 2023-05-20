/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:55:18 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/20 18:31:21 by robegarc         ###   ########.fr       */
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
	i = -1;
	while (N >= 0 && ++i < N)
		gianlucaVacchi[i].set_name(name);

	return (gianlucaVacchi);
}