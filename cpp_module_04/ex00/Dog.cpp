#include "Dog.hpp"

Dog::Dog()
{
	this->Animal::_type = "Dog";
	this->Animal::_sound = "Bau";
	std::cout << "[DOG] default constructor called" << std::endl;
	return ;
}

Dog::Dog( const Dog &D ) : Animal( D )
{
	std::cout << "[DOG] copy constructor called" << std::endl;
	*this = D;
	return ;
}

Dog::~Dog()
{
	std::cout << "[DOG] destructor called" << std::endl;
}