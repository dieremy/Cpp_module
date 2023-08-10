#include "Form.hpp"

Form::Form() : _name(NULL), _isSigned(false), _gradeToSign(150), _gradeToExec(150)
{
  std::cout << "[Form] Default constructor called" << std::endl;
}

Form::Form( std::string name, int gradeToSign, int gradeToExec ) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if ( this->_gradeToExec < 1 )
		throw GradeTooHighException();
	else if ( this->_gradeToExec > 150 )
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
	if (this != &F)
	{
		this._name = F._name;
		this._isSigned = F._isSigned;
		this._gradeToSign = F._gradeToSign;
		this._gradeToExec = F._gradeToExec;
	}
	return (*this);
}


bool				Form::beSigned( Bureaucrat &B )
{
	if (B._grade >= this._gradeToSign)
		this._isSigned = true;
	return (this._isSigned);

}

std::string         Form::getName( void ) const
{
	return (this._name);
}

int                 Form::getGradeToExec( void ) const
{
	return (this._gradeToExec)
}

void                Form::increaseGrade( int n )
{}

void                Form::decreaseGrade( int n )
{}

std::exception      Form::GradeTooHighException( void )
{
	std::cout << "GradeTooHigh" << std::endl;
	throw std::exception();
}

std::exception      Form::GradeTooLowException( void )
{
	std::cout << "GradeTooLow" << std::endl;
	throw std::exception();
}
