#include "ScavTrap.hpp"

int	testOne()
{
	ScavTrap s1("Brad Pitt");
	ScavTrap s2("Chiara Ferragni");
	int i = -1;
	
	std::cout << "\nSTART-GAME\n" << std::endl;

	while (s1.getHp() > 0 && s2.getHp() && ++i < 5)
	{
		if (s1.getEp() >= 1 && s1.getHp() >= 1)
		{
			s1.attack( s2.getName() );
			s2.takeDamage( s1.getAd() );
		}
		if (s2.getEp() >= 1 && s2.getHp() >= 1)
		{
			s2.attack( s1.getName() );
			s1.takeDamage( s2.getAd() );
		}
		s1.beRepaired(1);
		s2.beRepaired(1);
		s1.guardGate();
		s2.guardGate();
		std::cout << std::endl;
	}
	std::cout << "END-GAME\n" << std::endl;
	return (0);
}

int	testTwo()
{
	ScavTrap s1("Shia Labeouf");
	ScavTrap s2("Lara Croft");
	ScavTrap s3("Mickey Mouse");
	ScavTrap s4("Elettra Lamborghini");
	std::cout << std::endl;
	
	s1.attack( s2.getName() );
	s2.takeDamage(5);
	s2.takeDamage(5);
	s2.takeDamage(5);
	s2.beRepaired(5);
	s2.guardGate();
	s2.beRepaired(5);
	s3.attack( s1.getName() );
	s1.takeDamage(5);
	s1.guardGate();
	s1.beRepaired(5);
	s4.beRepaired(5);
	s4.beRepaired(5);
	s4.attack( s1.getName() );
	s4.beRepaired(5);
	s4.beRepaired(5);
	s4.guardGate();
	s4.beRepaired(5);
	s4.beRepaired(5);
	std::cout << std::endl;

	std::cout << "s1 NAME: " << s1.getName() << std::endl;
	std::cout << "s2 NAME: " << s2.getName() << std::endl;
	std::cout << "s3 NAME: " << s3.getName() << std::endl;
	std::cout << "s4 NAME: " << s4.getName() << std::endl;
	std::cout << std::endl;

	std::cout << "s1 HP: " << s1.getHp() << std::endl;
	std::cout << "s2 HP: " << s2.getHp() << std::endl;
	std::cout << "s3 HP: " << s3.getHp() << std::endl;
	std::cout << "s4 HP: " << s4.getHp() << std::endl;
	std::cout << std::endl;
	
	std::cout << "s1 EP: " << s1.getEp() << std::endl;
	std::cout << "s2 EP: " << s2.getEp() << std::endl;
	std::cout << "s3 EP: " << s3.getEp() << std::endl;
	std::cout << "s4 EP: " << s4.getEp() << std::endl;
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