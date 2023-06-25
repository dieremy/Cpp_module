#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : virtual public Animal
{
	public:
		Dog();
		Dog( const Dog &C );
		virtual ~Dog();
};

#endif