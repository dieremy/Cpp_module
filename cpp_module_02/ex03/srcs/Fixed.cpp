/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:19:06 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/03 15:40:23 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"


Fixed::Fixed( const float f )
{
	this->_n = roundf(f * (1 << this->_bits));
	return ;
}

Fixed::Fixed( const int i )
{
	this->_n = (i * (1 << this->_bits));
	return ;
}

Fixed::Fixed()
{
	this->_n = 0;
	return ;
}

Fixed::Fixed( const Fixed &nFixed )
{
	this->_n = nFixed.getRawBits();
	return ;
}

Fixed::~Fixed()
{
	return ;
}

void	Fixed::setRawBits( int const raw )
{
	this->_n = raw;
	return ;
}

int		Fixed::getRawBits( void ) const
{
	return (this->_n);
}


float	Fixed::toFloat( void ) const
{
	return (((float)this->_n / (float)(1 << this->_bits)));
}

int		Fixed::toInt( void ) const
{
	return (roundf(this->toFloat()));
}

Fixed	&Fixed::operator=( const Fixed &n )
{
	setRawBits(n.getRawBits());
	return (*this);
}

// Output stream objects can write sequences of characters and represent other kinds of data.
// Specific members are provided to perform these output operations
std::ostream &operator<<(std::ostream &out, const Fixed &nFixed)
{
	out << nFixed.toFloat();
	return (out);
}

Fixed	&Fixed::operator+( const Fixed &fixed )
{
	this->setRawBits(this->getRawBits() + fixed.getRawBits());
	return (*this);
}

Fixed	&Fixed::operator-( const Fixed &fixed )
{
	this->setRawBits(this->getRawBits() - fixed.getRawBits());
	return (*this);
}

Fixed	&Fixed::operator*( const Fixed &fixed )
{
	this->setRawBits(this->getRawBits() * fixed.getRawBits() >> this->_bits);
	return (*this);
}

Fixed	&Fixed::operator/( const Fixed &fixed )
{
	this->setRawBits(this->getRawBits() / fixed.getRawBits());
	return (*this);
}

bool	Fixed::operator<( const Fixed &fixed ) const
{
	return (this->getRawBits() < fixed.getRawBits());
}

bool	Fixed::operator>( const Fixed &fixed ) const
{
	return (this->getRawBits() > fixed.getRawBits());
}

bool	Fixed::operator<=( const Fixed &fixed ) const
{
	return (this->getRawBits() <= fixed.getRawBits());
}

bool	Fixed::operator>=( const Fixed &fixed ) const
{
	return (this->getRawBits() >= fixed.getRawBits());
}

bool	Fixed::operator!=( const Fixed &fixed ) const
{
	return (this->getRawBits() != fixed.getRawBits());
}

bool	Fixed::operator==( const Fixed &fixed ) const
{
	return (this->getRawBits() == fixed.getRawBits());
}

Fixed	&Fixed::operator++( void )
{
	this->_n++;
	return (*this);
}

Fixed	&Fixed::operator--( void )
{
	this->_n--;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	tmp;

	tmp = *this;
	this->_n++;
	return (tmp);
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp;

	tmp = *this;
	this->_n--;
	return (tmp);
}

Fixed		&Fixed::min( Fixed &f1, Fixed &f2 )
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

const Fixed	&Fixed::min( const Fixed &f1, const Fixed &f2 )
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed		&Fixed::max( Fixed &f1, Fixed &f2 )
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

const Fixed	&Fixed::max( const Fixed &f1, const Fixed &f2 )
{
	if (f1 > f2)
		return (f1);
	return (f2);
}
