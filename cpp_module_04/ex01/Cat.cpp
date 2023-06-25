#include "Cat.hpp"

Cat::Cat()
{
	this->Animal::_type = "Cat";
	this->Animal::_sound = "Miao";
	this->_Brain = new Brain();
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
	delete this->_Brain;
	std::cout << "[CAT] destructor called" << std::endl;
}