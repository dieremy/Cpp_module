/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 22:33:29 by parrot            #+#    #+#             */
/*   Updated: 2023/06/12 23:31:18 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	ftAbs( Fixed f )
{
	return ( f < 0 ) ? f * -1 : f ;
}

Fixed	ftArea( Point const a, Point const b, Point const c )
{
	Fixed	aF = a.getX() * ( b.getY() - c.getY() );
	Fixed	bF = b.getX() * ( c.getY() - a.getY() );
	Fixed	cF = c.getX() * ( a.getY() - b.getY() );

	Fixed	res = ( ( aF + bF + cF ) / 2 );
	return ( res );
}

bool	bsp( Point const a, Point const b, Point const c, Point const p )
{
	Fixed	abcArea;
	Fixed	abpArea;
	Fixed	acpArea;
	Fixed	bcpArea;
	Fixed	check;
	
	abcArea = ftAbs( ftArea( a, b, c ) );
	abpArea = ftAbs( ftArea( a, b, p ) );
	acpArea = ftAbs( ftArea( a, c, p ) );
	bcpArea = ftAbs( ftArea( b, c, p ) );
	check = (abpArea + acpArea + bcpArea);
	return (abcArea == check);
}