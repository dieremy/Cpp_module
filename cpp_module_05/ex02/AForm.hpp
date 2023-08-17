#ifndef AFORM_HPP
# define AFORM_HPP

# include <exception>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class	Bureaucrat;

class	AForm
{
    private:
		std::string const	_name;
		bool				_isSigned;
		int					_gradeMinSign;
		int					_gradeToExec;

	public:
		virtual ~AForm(){};

		virtual void				beSigned( Bureaucrat &B ) = 0;
		virtual std::string         getName( void ) const = 0;
		virtual bool				getIsSigned( void ) const = 0;
		virtual int                 getGradeMinSign( void ) const = 0;
		virtual int                 getGradeToExec( void ) const = 0;
};

#endif