#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->WrongAnimal::_type = "WrongCat";
	this->WrongAnimal::_sound = "WrongMiao";
	std::cout << "[WrongCAT] default constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat( const WrongCat &wC ) : WrongAnimal( wC )
{
	std::cout << "[WrongCAT] copy constructor called" << std::endl;
	*this = wC;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCAT] destructor called" << std::endl;
}