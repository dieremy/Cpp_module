#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : virtual public Animal
{
	public:
		Cat();
		Cat( const Cat &C );
		virtual ~Cat();
};

#endif