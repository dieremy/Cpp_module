#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : virtual public Animal
{
	private:
		Brain	*_Brain;

	public:
		Cat();
		Cat( const Cat &C );
		virtual ~Cat();
};

#endif