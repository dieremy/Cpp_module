#include "Dog.hpp"

Dog::Dog()
{
	this->Animal::_type = "Dog";
	this->Animal::_sound = "Bau";
	std::cout << "[DOG] default constructor called" << std::endl;
	return ;
}

Dog::Dog( const Dog &C ) : Animal( C )
{
	std::cout << "[DOG] copy constructor called" << std::endl;
	*this = C;
	return ;
}

Dog::~Dog()
{
	std::cout << "[DOG] destructor called" << std::endl;
}