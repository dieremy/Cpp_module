/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:55:41 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/03 16:28:26 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Fixed	ft_abs( Fixed p )
{
	return ((p < 0) ? p * -1 : p);
}

Fixed	ft_area( Point const a, Point const b, Point const c )
{
	return (((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY()))) / 2);
}

bool	bsp( Point const a, Point const b, Point const c, Point const p )
{
	Fixed	abcArea = ft_abs(ft_area(a,b,c));
	Fixed	abpArea = ft_abs(ft_area(a,b,p));
	Fixed	acpArea = ft_abs(ft_area(a,c,p));
	Fixed	bcpArea = ft_abs(ft_area(b,c,p));

	return(abcArea == abpArea + acpArea + bcpArea);
}
