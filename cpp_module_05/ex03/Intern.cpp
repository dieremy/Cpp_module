#include "Intern.hpp"

Intern::Intern()
{
	return ;
}

Intern::Intern(const Intern &intern)
{
	*this = intern;
}

Intern::~Intern()
{
	return ;
}

Form		*Intern::makeShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form		*Intern::makeRobotomy(std::string target)
{

	return (new RobotomyRequestForm(target));
}

Form		*Intern::makePresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form		*Intern::makeForm(std::string form, std::string target)
{
	int	i;
	std::string	forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	
	i = -1;
	while (++i < 3)
	{
		if (form == forms[i])
		{
			std::cout << "Intern creates " << form << std::endl;
			switch (i)
			{
				case (0) :
					return (makeShrubbery(target));
				case (1) :
					return (makeRobotomy(target));
				case (2) :
					return (makePresidential(target));
			}
		}
	}
	throw FormNotFoundException();
}