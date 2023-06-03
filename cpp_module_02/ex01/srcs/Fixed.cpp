/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:19:06 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/03 13:53:59 by robegarc         ###   ########.fr       */
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

Fixed::Fixed( const Fixed &nFixed )
{
	std::cout << "Copy constructor called" << std::endl;
	this->_n = nFixed.getRawBits();
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

float	Fixed::toFloat( void ) const
{
	return (((float)this->_n / (float)(1 << this->_bits)));
}

int		Fixed::toInt( void ) const
{
	return (roundf(this->toFloat()));
}


Fixed::Fixed( const float f )
{
	std::cout << "Float constructor called" << std::endl;
	this->_n = roundf(f * (1 << this->_bits));
	return ;
}

Fixed::Fixed( const int i )
{
	std::cout << "Int constructor called" << std::endl;
	this->_n = (i * (1 << this->_bits));
	return ;
}

// Output stream objects can write sequences of characters and represent other kinds of data.
// Specific members are provided to perform these output operations

std::ostream &operator<<(std::ostream &out, const Fixed &nFixed)
{
	out << nFixed.toFloat();
	return (out);
}
