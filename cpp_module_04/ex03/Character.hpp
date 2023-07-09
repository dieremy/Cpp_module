#ifndef	CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		int			_len;

	public:
		Character();
		Character( std::string name );
		Character( Character const &Ch );
		~Character();

		Character			&operator=( Character const &Ch );

		std::string const	&getName() const ;
		void				use( int idx, ICharacter &target ) const ;
		void				equip( AMateria *Am );
		void				unequip( int idx );
};

#endif