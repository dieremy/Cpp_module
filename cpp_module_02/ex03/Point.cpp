/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 22:24:46 by parrot            #+#    #+#             */
/*   Updated: 2023/06/12 23:01:25 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() // x = 0 y = 0
{
	this->_x = 0;
	this->_y = 0;
}

Point::Point( Point const &p )
{
	this->_x = p._x;
	this->_y = p._y;
}

Point::Point( const float x, const float y )
{
	this->_x = x;
	this->_y = y;
}

Point::~Point()
{
	return ;
}

Point	&Point::operator=( Point const &p )
{
	if (this == &p)
		return (*this);
	this->_x = p.getX();
	this->_y = p.getY();
	return (*this);
}

Fixed	Point::getX( void ) const
{
	return (this->_x);
}

Fixed	Point::getY( void ) const
{
	return (this->_y);
}
