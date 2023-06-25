#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : virtual public Animal
{
	private:
		Brain	*_Brain;

	public:
		Dog();
		Dog( const Dog &C );
		virtual ~Dog();
};

#endif