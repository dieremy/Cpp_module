/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 14:05:20 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/09 23:59:59 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"

int main()
{
	ClapTrap cp1("hannah montana"), cp2("shakira");
	
	int i = 0;
	while (cp1.getHp() > 0 && cp2.getHp() && i < 5)
	{
		if (cp1.getEp() > 0 && cp1.getHp() > 0)
		{
			cp1.attack(cp2.getName());
			cp2.takeDamage(cp1.getAd());
		}
		if (cp2.getEp() > 0 && cp2.getHp() > 0)
		{
			cp2.attack(cp1.getName());
			cp1.takeDamage(cp2.getAd());
		}
		cp1.beRepaired(1);
		cp2.beRepaired(1);
		i++;
	}
	
	return (0);
}
