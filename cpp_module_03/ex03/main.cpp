#include "DiamondTrap.hpp"

int	testOne()
{
	DiamondTrap d1("Brad Pitt");
	DiamondTrap d2("Chiara Ferragni");
	int i = -1;
	
	std::cout << "\nSTART-GAME\n" << std::endl;

	while (d1.getHp() > 0 && d2.getHp() && ++i < 5)
	{
		if (d1.getEp() >= 1 && d1.getHp() >= 1)
		{
			d1.attack( d2.getName() );
			d2.takeDamage( d1.getAd() );
		}
		if (d2.getEp() >= 1 && d2.getHp() >= 1)
		{
			d2.attack( d1.getName() );
			d1.takeDamage( d2.getAd() );
		}
		d1.beRepaired(1);
		d2.beRepaired(1);
		d1.highFiveGuys();
		d2.highFiveGuys();
		std::cout << std::endl;
	}
	std::cout << "END-GAME\n" << std::endl;
	return (0);
}

int	testTwo()
{
	DiamondTrap d1("Shia Labeouf");
	DiamondTrap d2("Lara Croft");
	DiamondTrap d3("Mickey Mouse");
	DiamondTrap d4("Elettra Lamborghini");
	std::cout << std::endl;
	
	d1.attack( d2.getName() );
	d2.takeDamage(5);
	d2.takeDamage(5);
	d2.takeDamage(5);
	d2.beRepaired(5);
	d2.highFiveGuys();
	d2.beRepaired(5);
	d3.attack( d1.getName() );
	d1.takeDamage(5);
	d1.highFiveGuys();
	d1.beRepaired(5);
	d4.beRepaired(5);
	d4.beRepaired(5);
	d4.beRepaired(5);
	d4.beRepaired(5);
	d4.highFiveGuys();
	d4.beRepaired(5);
	d4.beRepaired(5);
	std::cout << std::endl;

	std::cout << "d1 NAME: " << d1.getName() << std::endl;
	std::cout << "d2 NAME: " << d2.getName() << std::endl;
	std::cout << "d3 NAME: " << d3.getName() << std::endl;
	std::cout << "d4 NAME: " << d4.getName() << std::endl;
	std::cout << std::endl;

	std::cout << "d1 HP: " << d1.getHp() << std::endl;
	std::cout << "d2 HP: " << d2.getHp() << std::endl;
	std::cout << "d3 HP: " << d3.getHp() << std::endl;
	std::cout << "d4 HP: " << d4.getHp() << std::endl;
	std::cout << std::endl;
	
	std::cout << "d1 EP: " << d1.getEp() << std::endl;
	std::cout << "d2 EP: " << d2.getEp() << std::endl;
	std::cout << "d3 EP: " << d3.getEp() << std::endl;
	std::cout << "d4 EP: " << d4.getEp() << std::endl;
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