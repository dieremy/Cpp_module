#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "[ICharacter] Default constructor called" << std::endl;
	return ;
}

ICharacter::ICharacter( ICharacter const &Ic )
{
	std::cout << "[ICharacter] Copy constructor called" << std::endl;
	*this = &Ic;
	return ;
}

ICharacter::~ICharacter()
{
	std::cout << "[ICharacter] Destructor called" << std::endl;
	return ;
}


// virtual std::string const	&ICharacter::getName() const = 0 ;
// virtual void	ICharacter::equip( AMateria *m ) = 0;
// virtual void	ICharacter::unequip( int idx ) const = 0;
// virtual void	ICharacter::use( int idx, ICharacter &target ) const = 0;