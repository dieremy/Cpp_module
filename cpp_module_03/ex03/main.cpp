/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:11:20 by parrot            #+#    #+#             */
/*   Updated: 2023/06/13 23:53:38 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	testOne()
{
	ClapTrap c1("Michael Jackson");
	ClapTrap c2("Kurt Cobain");
	int i = -1;
	
	std::cout << "\nSTART-GAME\n" << std::endl;

	while (c1.getHp() > 0 && c2.getHp() && ++i < 5)
	{
		if (c1.getEp() >= 1 && c1.getHp() >= 1)
		{
			c1.attack( c2.getName() );
			c2.takeDamage( c1.getAd() );
		}
		if (c2.getEp() >= 1 && c2.getHp() >= 1)
		{
			c2.attack( c1.getName() );
			c1.takeDamage( c2.getAd() );
		}
		c1.beRepaired(1);
		c2.beRepaired(1);
		std::cout << std::endl;
	}
	std::cout << "END-GAME\n" << std::endl;
	return (0);
}

int	testTwo()
{
	ClapTrap c1("Jennifer Aniston");
	ClapTrap c2("Barbra Streisand");
	ClapTrap c3("Sandra Bullock");
	ClapTrap c4("Snoop Dogg");
	std::cout << std::endl;
	
	c1.attack( c2.getName() );
	c2.takeDamage(5);
	c2.takeDamage(5);
	c2.takeDamage(5);
	c2.beRepaired(5);
	c2.beRepaired(5);
	c3.attack( c1.getName() );
	c1.takeDamage(5);
	c1.beRepaired(5);
	c4.beRepaired(5);
	c4.beRepaired(5);
	c4.beRepaired(5);
	c4.beRepaired(5);
	c4.beRepaired(5);
	c4.beRepaired(5);
	std::cout << std::endl;

	std::cout << "C1 NAME: " << c1.getName() << std::endl;
	std::cout << "C2 NAME: " << c2.getName() << std::endl;
	std::cout << "C3 NAME: " << c3.getName() << std::endl;
	std::cout << "C4 NAME: " << c4.getName() << std::endl;
	std::cout << std::endl;

	std::cout << "C1 HP: " << c1.getHp() << std::endl;
	std::cout << "C2 HP: " << c2.getHp() << std::endl;
	std::cout << "C3 HP: " << c3.getHp() << std::endl;
	std::cout << "C4 HP: " << c4.getHp() << std::endl;
	std::cout << std::endl;
	
	std::cout << "C1 EP: " << c1.getEp() << std::endl;
	std::cout << "C2 EP: " << c2.getEp() << std::endl;
	std::cout << "C3 EP: " << c3.getEp() << std::endl;
	std::cout << "C4 EP: " << c4.getEp() << std::endl;
	std::cout << std::endl;
	return (0);
}

int main(int ac, char **av)
{
	std::string	arg;
	
	if (ac != 2)
		std::cout << "ERROR, to test put <test1> or <test2> as second argument " << std::endl;
	else
	{	
		arg = av[1];
		if (!arg.compare("test1"))
			testOne();
		else if (!arg.compare("test2"))
			testTwo();
		else
			std::cout << "ERROR, to test put <test1> or <test2> as second argument" << std::endl;
	}
	return (0);
}