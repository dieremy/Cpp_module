/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:46:20 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/03 15:58:55 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point
{
	private:
		Fixed	_x;
		Fixed	_y;

	public:
		Fixed	getX( void ) const;
		Fixed	getY( void  ) const;

		Point&  operator=( const Point &rhs );

		Point();
		Point( const float x, const float y );
		Point( const Point &src );
		~Point();
};

bool	bsp( Point const a, Point const b, Point const c, Point const point );

#endif
