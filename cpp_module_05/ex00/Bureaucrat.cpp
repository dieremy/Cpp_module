#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
  this->_name = NULL;
  this->_grade = 150;
  std::cout << "[Bureaucrat] Default cosntuctor called" std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade )
{
  this->_grade = grade;
  this->_name = name;
  if ( this->_grade < 1 )
    throw GradeTooHighException();
  else if ( this->_grade > 150 )
    throw GradeTooLowException();
  std::cout << "[Bureaucrat] " << this->_name << " cosntuctor called" std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat &B )
{
  std::cout << "[Bureaucrat] Copy assignement cosntuctor called" std::endl;
  *this = B;
  return ;
}

Bureaucrat::~Bureaucrat()
{
  std::cout << "[Bureaucrat] Destructor called" << std:endl;
  return ;
}

Bureaucrat      &Bureaucrat::operator=( const Bureaucrat &B )
{
  std::cout << "[Bureaucrat] Operator assignement called" << std::endl;
  if ( this != &B )
  {
    this->_name = B._name;
    this->_grade = B._grade;
  }
  return ( *this );
}

std::ostream    &Bureaucrat::operator<<( std::ostream &out, const Bureaucrat &B )
{
  out << B.getName() << ", bureaucrat grade" << B.getgrade();

  return ( out );
}

}
void             increaseGrade( int n )
{
  if ( ( this->_grade - n ) < 1 )
    return ;
  this->_grade -= n;
}

std::exception  Bureaucrat::GradeTooHighException( void )
{
  std::cout << "GradeTooHigh" << std::endl;
  throw std::exception();
}

void             decreaseGrade( int n )
{
  if ( ( this->_grade + n ) > 150 )
    return ;
  this->_grade += n;
}

std::exception   Bureaucrat::GradeTooLowException( void )
{
  std::cout << "GradeTooLow" << std::endl;
  throw std::exception();
}

std::string     Bureaucrat::getName( void )
{
  return ( this->_name );
}

int             Bureaucrat::getGrade( void )
{
  return ( this->_grade );
}

