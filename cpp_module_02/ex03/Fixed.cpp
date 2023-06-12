/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 22:36:15 by parrot            #+#    #+#             */
/*   Updated: 2023/06/12 22:04:26 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->_num = 0;
}

Fixed::Fixed( const Fixed &f )
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::Fixed( const int n )
{
	// std::cout << "Int constructor called" << std::endl;
	this->_num = (n * (1 << this->_bits));
	return ;
}

Fixed::Fixed( const float fp )
{
	// std::cout << "Float constructor called" << std::endl;
	this->_num = roundf(fp * (1 << this->_bits));
	return ;	
}


Fixed	&Fixed::operator=( const Fixed &f )
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this == &f)
		return (*this);
	this->_num = f.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

void	Fixed::setRawBits( int const raw )
{
	this->_num = raw;
	return ;
}

int		Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_num);
}

float	Fixed::toFloat( void ) const
{
	float	tmp;

	tmp = (((float)this->_num / (float)(1 << this->_bits)));
	return (tmp);
}

int		Fixed::toInt( void ) const
{
	return (roundf(this->toFloat()));
}

std::ostream	&operator<<( std::ostream &out, const Fixed &f )
{
	out << f.toFloat();
	return (out);
}

Fixed	&Fixed::operator+( const Fixed &fixed )
{
	this->_num += fixed.getRawBits();
	return (*this);
}

Fixed	&Fixed::operator-( const Fixed &fixed )
{
	this->_num -= fixed.getRawBits();
	return (*this);
}

Fixed	&Fixed::operator*( const Fixed &fixed )
{
	this->_num *= fixed.toFloat();
	return (*this);
}

Fixed	&Fixed::operator/( const Fixed &fixed )
{
	this->_num /= fixed.getRawBits();
	return (*this);
}

bool	Fixed::operator<( const Fixed &fixed ) const 
{
	return (this->_num < fixed.getRawBits());
}

bool	Fixed::operator>( const Fixed &fixed ) const 
{
	return (this->_num > fixed.getRawBits());
}

bool	Fixed::operator<=( const Fixed &fixed ) const 
{
	return (this->_num <= fixed.getRawBits());
}

bool	Fixed::operator>=( const Fixed &fixed ) const 
{
	return (this->_num >= fixed.getRawBits());
}

bool	Fixed::operator!=( const Fixed &fixed ) const 
{
	return (this->_num != fixed.getRawBits());
}

bool	Fixed::operator==( const Fixed &fixed ) const 
{
	return (this->_num == fixed.getRawBits());
}

Fixed	&Fixed::operator++( void )
{
	this->_num++;
	return (*this);
}

Fixed	&Fixed::operator--( void )
{
	this->_num--;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	tmp;

	tmp = *this;
	this->_num++;
	return (tmp);
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp;

	tmp = *this;
	this->_num--;
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
