#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class	Form;

class   Bureaucrat
{
	private:
		std::string const   _name;
		int                 _grade;

	public:
		Bureaucrat();
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat &B );
		~Bureaucrat();

		Bureaucrat          &operator=( const Bureaucrat &B );

		std::string         getName( void ) const ;
		int                 getGrade( void ) const ;
		void                increaseGrade( int n );
		void                decreaseGrade( int n );
		std::exception      GradeTooHighException( void );
		std::exception      GradeTooLowException( void );

		void				signForm( Form &F );
};

std::ostream        &operator<<( std::ostream &out, const Bureaucrat &B );

#endif
