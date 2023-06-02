/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 20:47:09 by parrot            #+#    #+#             */
/*   Updated: 2023/06/02 22:04:36 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed	&Fixed::operator=( const Fixed &n )
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(n.getRawBits());
	return (*this);
}

void	Fixed::setRawBits( int const raw )
{
	this->_n = raw;
	return ;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);
}

Fixed::Fixed()
{
	this->_n = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed &n )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = n;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ; 
}
