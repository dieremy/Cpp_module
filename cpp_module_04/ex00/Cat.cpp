#include "Cat.hpp"

Cat::Cat()
{
	this->Animal::_type = "Cat";
	this->Animal::_sound = "Miao";
	std::cout << "[CAT] default constructor called" << std::endl;
	return ;
}

Cat::Cat( const Cat &C ) : Animal( C )
{
	std::cout << "[CAT] copy constructor called" << std::endl;
	*this = C;
	return ;
}

Cat::~Cat()
{
	std::cout << "[CAT] destructor called" << std::endl;
}