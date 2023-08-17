#include "Form.hpp"

Form::Form() : _name(NULL), _isSigned(false), _gradeMinSign(150), _gradeToExec(150)
{
  std::cout << "[Form] Default constructor called" << std::endl;
}

Form::Form( std::string name, int gradeMinSign, int gradeToExec ) : _name(name), _isSigned(false), _gradeMinSign(gradeMinSign), _gradeToExec(gradeToExec)
{
	if ( this->_gradeToExec < 1 || this->_gradeMinSign < 1 )
		throw GradeTooHighException();
	else if ( this->_gradeToExec > 150 || this->_gradeMinSign > 150 )
		throw GradeTooLowException();
	std::cout << "[Form] " << this->_name << " constructor called" << std::endl;
}

Form::Form( const Form &F )
{
	*this = F;
	std::cout << "[Form] Copy assignment constructor called" << std::endl;
}

Form::~Form()
{
  std::cout << "[Form] Destructor called" << std::endl;
}

Form				&Form::operator=( const Form &F )
{
	std::cout << "[Form] Operator assignement called" << std::endl;
	if (this == &F)
		return (*this);
	return (*this);
}

void				Form::beSigned( Bureaucrat &B )
{
	if (B.getGrade() < this->getGradeMinSign())
		throw (GradeTooHighException());
	else if (B.getGrade() > this->getGradeMinSign())
		throw (GradeTooLowException());
	else
		this->_isSigned = true;
}

std::string         Form::getName( void ) const
{
	return (this->_name);
}

bool				Form::getIsSigned( void ) const
{
	return (this->_isSigned);
}

int                 Form::getGradeMinSign( void ) const
{
	return (this->_gradeMinSign);
}

int                 Form::getGradeToExec( void ) const
{
	return (this->_gradeToExec);
}

const char			*Form::GradeTooHighException::what() const throw()
{
    return ( "Grade is too high" );
}

const char			*Form::GradeTooLowException::what() const throw()
{
    return ( "Grade is too low" );
}

std::ostream		&operator<<( std::ostream &out, const Form &form )
{
	out << std::endl;
	out << "----------------------------------------" << std::endl;
	out << "Name: " << form.getName() << std::endl;
	out << "GradeMinSign: " << form.getGradeMinSign() << std::endl;
	out << "GradeToExec: " << form.getGradeToExec() << std::endl;
	out << "IsSigned: " << form.getIsSigned() << std::endl;
	out << "----------------------------------------" << std::endl;
	return (out);
}