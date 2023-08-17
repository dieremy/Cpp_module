#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
	: Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "This " << this->getName() << " constructed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rrf) : Form(rrf), _target(rrf._target)
{
	*this = rrf;
	std::cout << this->getName() << " copy constructor called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << this->getName() << " destructor called." << std::endl;
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rrf)
{
	if (this == &rrf)
		return (*this);
	Form::operator=(rrf);
	_target = rrf._target;
    return (*this);
}

void			RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
    if (rand() % 2)
        std::cout << _target << " has been robotomized successfully." << std::endl;
    else
        std::cout << _target << " has not been robotomized." << std::endl;
}
