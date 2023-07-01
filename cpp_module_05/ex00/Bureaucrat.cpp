#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
  this->_grade = getGrade();
  this->_name = getName();
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

int             Bureaucrat::GradeTooHighException( void )
{
  try
  {
    this->_grade++;
  }
  catch ( std::exception & e )
  {
    std::cout << "GradeTooHigh" << std::endl;
  }
}

int             Bureaucrat::GradeTooLowException( void )
{
  try
  {
    this->_grade--;
  }
  catch ( std::exception & e )
  { 
    std::cout << "GradeTooLow" << std::endl;
  }
}

std::string     Bureaucrat::getName( void )
{
  return ( this->_name );
}

int             Bureaucrat::getGrade( void )
{
  return ( this->_grade );
}

