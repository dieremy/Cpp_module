#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria();
		AMateria( AMateria const &Am );
		AMateria( std::string const &type );
		virtual ~AMateria();
		AMateria			&operator=( AMateria const &Am );

		std::string const	&getType() const ; // returns the materia type

		virtual AMateria	*clone() const = 0;
		virtual void		use( ICharacter &target );
};

#endif