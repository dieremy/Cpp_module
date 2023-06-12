/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 22:17:27 by parrot            #+#    #+#             */
/*   Updated: 2023/06/12 23:16:36 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	private:
		Fixed	_x;
		Fixed	_y;

	public:
		Point(); // x = 0 y = 0
		Point( Point const &p );
		Point( const float x, const float y );
		~Point();
		
		Point	&operator=( Point const &p );

		Fixed	getX( void ) const ;
		Fixed	getY( void ) const ;
};

bool	bsp( Point const a, Point const b, Point const c, Point const p );

#endif