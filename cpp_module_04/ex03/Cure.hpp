#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure();
		Cure( Cure const &C );
		~Cure();

		AMateria	*clone() const ;
};

#endif