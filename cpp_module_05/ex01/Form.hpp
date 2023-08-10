#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
		std::string const	_name;
		bool				_isSigned;
		int					_gradeToSign;
		int					_gradeToExec;

	public:
		Form();
		Form( std::string name, int gradeToSign, int gradeToExec );
		Form( const Form &F );
		~Form();

		Form				&operator=( const Form &F );

		bool				beSigned( Bureaucrat &B );
		std::string         getName( void ) const;
		int                 getGrade( void ) const;
		void                increaseGrade( int n );
		void                decreaseGrade( int n );
		std::exception      GradeTooHighException( void );
		std::exception      GradeTooLowException( void );
};

#endif