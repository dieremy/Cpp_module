#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual ~IMateriaSource(); { std::cout << "[IMateriaSource] Destructor called" << std::endl; }
		virtual void		learnMateria( AMateria* ) = 0;
		virtual AMateria	*createMateria( std::string const &type ) = 0;
};

#endif