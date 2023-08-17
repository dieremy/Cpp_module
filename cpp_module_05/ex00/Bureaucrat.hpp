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
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat &B );
		~Bureaucrat();

		Bureaucrat          &operator=( const Bureaucrat &B );

		std::string         getName( void ) const ;
		int                 getGrade( void ) const ;
		void                increaseGrade( int n );
		void                decreaseGrade( int n );
		
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ( "Grade is too high" );
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ( "Grade is too low" );
				}
		};
};

std::ostream        &operator<<( std::ostream &out, const Bureaucrat &B );

#endif
