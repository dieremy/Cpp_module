#include "Brain.hpp"


/* ORTHODOX CANONICAL FORM */
Brain::Brain()
{
	std::cout << "[BRAIN] Default constructor called" << std::endl;
	return ;
}

Brain::Brain( const Brain &B )
{
	std::cout << "[BRAIN] Default constructor called" << std::endl;
	*this = B;
	return ;
}

Brain::~Brain()
{
	std::cout << "[BRAIN] Destructor called" << std::endl;
	return ;
}

Brain	&Brain::operator=( const Brain &B )
{
	int	i;

	if ( this == &B )
		return ( *this );
	i = -1;
	while ( ++i < 100 )
		this->_ideas[i] = B._ideas[i];
	return ( *this );
}
