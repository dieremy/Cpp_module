#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("NONE"), _grade(150)
{
  std::cout << "[Bureaucrat] Default cosntuctor called" << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade)
{
	if ( this->_grade < 1 )
		throw GradeTooHighException();
	else if ( this->_grade > 150 )
		throw GradeTooLowException();
	std::cout << "[Bureaucrat] " << this->_name << " cosntuctor called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat &B )
{
  std::cout << "[Bureaucrat] Copy assignement cosntuctor called" << std::endl;
  *this = B;
  return ;
}

Bureaucrat::~Bureaucrat()
{
  std::cout << "[Bureaucrat] Destructor called" << std::endl;
  return ;
}

Bureaucrat		&Bureaucrat::operator=( const Bureaucrat &B )
{
	std::cout << "[Bureaucrat] Operator assignement called" << std::endl;
	if ( this == &B )
		return ( *this );
	this->_grade = B._grade;
	return ( *this );
}

std::ostream	&operator<<( std::ostream &out, const Bureaucrat &B )
{
	out << B.getName() << ", bureaucrat grade" << B.getGrade();
	return ( out );
}

void			Bureaucrat::increaseGrade( int n )
{
	if ( ( this->_grade - n ) < 1 )
		throw GradeTooHighException();
	this->_grade -= n;
}

std::exception  Bureaucrat::GradeTooHighException( void )
{
	std::cout << "GradeTooHigh" << std::endl;
	throw std::exception();
}

void			Bureaucrat::decreaseGrade( int n )
{
	if ( ( this->_grade + n ) > 150 )
		throw GradeTooLowException();
	this->_grade += n;
}

std::exception	Bureaucrat::GradeTooLowException( void )
{
	std::cout << "GradeTooLow" << std::endl;
	throw std::exception();
}

std::string     Bureaucrat::getName( void ) const
{
  return ( this->_name );
}

int             Bureaucrat::getGrade( void ) const
{
  return ( this->_grade );
}

