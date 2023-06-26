#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"

// class	AMateria;

class	ICharacter
{
	public:
		ICharacter();
		ICharacter( ICharacter const &Ic );
		virtual	~ICharacter();

		virtual std::string const	&getName() const = 0 ;
		virtual void	equip( AMateria *m ) = 0;
		virtual void	unequip( int idx ) const = 0;
		virtual void	use( int idx, ICharacter &target ) const = 0;
};

#endif