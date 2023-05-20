/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:23:20 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/20 18:33:08 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int main()
{
	Zombie	*Jlo;
	int		i;

	Jlo = zombieHorde(12, "Jennifer Aniston");
	i = -1;
	while (++i < 13)
		Jlo[i].announce();
	delete();
	return (0);
}