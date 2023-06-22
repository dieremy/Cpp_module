#include "FragTrap.hpp"

int	testOne()
{
	FragTrap f1("Brad Pitt");
	FragTrap f2("Chiara Ferragni");
	int i = -1;
	
	std::cout << "\nSTART-GAME\n" << std::endl;

	while (f1.getHp() > 0 && f2.getHp() && ++i < 5)
	{
		if (f1.getEp() >= 1 && f1.getHp() >= 1)
		{
			f1.attack( f2.getName() );
			f2.takeDamage( f1.getAd() );
		}
		if (f2.getEp() >= 1 && f2.getHp() >= 1)
		{
			f2.attack( f1.getName() );
			f1.takeDamage( f2.getAd() );
		}
		f1.beRepaired(1);
		f2.beRepaired(1);
		f1.highFiveGuys();
		f2.highFiveGuys();
		std::cout << std::endl;
	}
	std::cout << "END-GAME\n" << std::endl;
	return (0);
}

int	testTwo()
{
	FragTrap f1("Shia Labeouf");
	FragTrap f2("Lara Croft");
	FragTrap f3("Mickey Mouse");
	FragTrap f4("Elettra Lamborghini");
	std::cout << std::endl;
	
	f1.attack( f2.getName() );
	f2.takeDamage(5);
	f2.takeDamage(5);
	f2.takeDamage(5);
	f2.beRepaired(5);
	f2.highFiveGuys();
	f2.beRepaired(5);
	f3.attack( f1.getName() );
	f1.takeDamage(5);
	f1.highFiveGuys();
	f1.beRepaired(5);
	f4.beRepaired(5);
	f4.beRepaired(5);
	f4.beRepaired(5);
	f4.beRepaired(5);
	f4.highFiveGuys();
	f4.beRepaired(5);
	f4.beRepaired(5);
	std::cout << std::endl;

	std::cout << "f1 NAME: " << f1.getName() << std::endl;
	std::cout << "f2 NAME: " << f2.getName() << std::endl;
	std::cout << "f3 NAME: " << f3.getName() << std::endl;
	std::cout << "f4 NAME: " << f4.getName() << std::endl;
	std::cout << std::endl;

	std::cout << "f1 HP: " << f1.getHp() << std::endl;
	std::cout << "f2 HP: " << f2.getHp() << std::endl;
	std::cout << "f3 HP: " << f3.getHp() << std::endl;
	std::cout << "f4 HP: " << f4.getHp() << std::endl;
	std::cout << std::endl;
	
	std::cout << "f1 EP: " << f1.getEp() << std::endl;
	std::cout << "f2 EP: " << f2.getEp() << std::endl;
	std::cout << "f3 EP: " << f3.getEp() << std::endl;
	std::cout << "f4 EP: " << f4.getEp() << std::endl;
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