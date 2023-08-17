#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
	: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "This " << this->getName() << " constructed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &scf) : Form(scf), _target(scf._target)
{
	*this = scf;
	std::cout << this->getName() << " copy constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << this->getName() << " destructor called." << std::endl;
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &scf)
{
	if (this == &scf)
		return (*this);
	Form::operator=(scf);
	_target = scf._target;
    return (*this);
}

void					ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::cout << "      *" << std::endl;
    std::cout << "     ***" << std::endl;
    std::cout << "    *****" << std::endl;
    std::cout << "   *******" << std::endl;
    std::cout << "  *********" << std::endl;
    std::cout << " ***********" << std::endl;
    std::cout << "*************" << std::endl;
    std::cout << "    |   |" << std::endl;
    std::cout << "    |___|" << std::endl;
}
