/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:52:14 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/03 16:04:59 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Fixed	Point::getX( void ) const
{
	return (this->_x);
}

Fixed	Point::getY( void  ) const
{
	return (this->_y);
}

Point	&Point::operator=( const Point &p )
{
	if (this != &p)
	{
		this->_x = p.getX();
		this->_y = p.getY();
	}
	return (*this);
}

Point::Point()
{
	this->_x = 0;
	this->_y = 0;
}

Point::Point( const float x, const float y )
{
	this->_x = x;
	this->_y = y;
}

Point::Point( const Point &p )
{
	this->_x = p._x;
	this->_y = p._y;
}

Point::~Point()
{
	return ;
}
