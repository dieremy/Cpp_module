#ifndef FORM_HPP
# define FORM_HPP

# include <exception>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class	Bureaucrat;

class	Form : public AForm
{
	protected:
		std::string const	_name;
		bool				_isSigned;
		int					_gradeMinSign;
		int					_gradeToExec;

	public:
		Form();
		Form( std::string name, int gradeToSign, int gradeToExec );
		Form( const Form &F );
		~Form();

		Form				&operator=( const Form &F );

		void				beSigned( Bureaucrat &B );
		std::string         getName( void ) const;
		bool				getIsSigned( void ) const;
		int                 getGradeMinSign( void ) const;
		int                 getGradeToExec( void ) const;
		
		class GradeTooHighException : public std::exception
        {
			public:
				const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
			public:
				const char *what() const throw();
        };
};

std::ostream	&operator<<( std::ostream &out, const Form &form );

#endif