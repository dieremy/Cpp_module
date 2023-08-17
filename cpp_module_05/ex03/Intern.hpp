#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		Form	*makeShrubbery(std::string target);
		Form	*makeRobotomy(std::string target);
		Form	*makePresidential(std::string target);

	public:
		Intern();
		Intern(const Intern &intern);
		~Intern();

		Form	*makeForm(std::string form, std::string target);

		class FormNotFoundException : public std::exception
		{
			public:
				const char *what() const throw()
				{ return ("Form not found"); }
		};
};

#endif