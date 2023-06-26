#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		Ice();
		Ice( Ice const &I );
		~Ice();

		AMateria	*clone() const ;
};

#endif