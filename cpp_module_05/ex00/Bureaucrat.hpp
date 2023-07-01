#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class   Bureaucrat
{
  private:
    std::string const   _name;
    int                 _grade;

  public:
    Bureaucrat();
    Bureaucrat( const Bureaucrat &B );
    ~Bureaucrat();

    Bureaucrat          &operator=( const Bureaucrat &B );

    std::ostream        &operator<<( std::ostream &out, const Bureaucrat &B );
    std::string         getName( void );
    int                 getGrade( void );
    std::exception      GradeTooHighException( void );
    std::exception      GradeTooLowException( void );
    void                increaseGrade( int n );
    void                decreaseGrade( int n );
};

#endif
