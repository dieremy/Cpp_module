#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
	: Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "This " << this->getName() << " constructed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ppd) : Form(ppd), _target(ppd._target)
{
	*this = ppd;
	std::cout << this->getName() << " copy constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << this->getName() << " destructor called." << std::endl;
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &ppd)
{
	if (this == &ppd)
		return (*this);
	Form::operator=(ppd);
	_target = ppd._target;
    return (*this);
}

void					PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
