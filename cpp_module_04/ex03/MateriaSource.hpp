#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_inventory[4];

	public:
		MateriaSource();
		MateriaSource( MateriaSource const &Ms );
		~MateriaSource();

		MateriaSource	&operator=( MateriaSource const &Ms );

		AMateria		*createMateria( std::string const & );
		void			learnMateria( AMateria* );
};

#endif