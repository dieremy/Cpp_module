/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:28:39 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/12 23:15:21 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point a( 0, 0 );
	Point b( 10, 30 );
	Point c( 20, 0 );
	Point p1( 10, 15 );
	Point p2( 30, 15 );

	std::cout << "A ( " << a.getX() << " , " << a.getY() << " )" << std::endl;
	std::cout << "B ( " << b.getX() << " , " << b.getY() << " )" << std::endl;
	std::cout << "C ( " << c.getX() << " , " << c.getY() << " )" << std::endl << std::endl;

	std::cout << "P1 ( " << b.getX() << " , " << b.getY() << " )" << std::endl;
	std::cout << "P2 ( " << c.getX() << " , " << c.getY() << " )" << std::endl << std::endl;

	std::cout << "P1 is ";
	if (!(bsp( a, b, c, p1 )))
		std::cout << "outside" << std::endl;
	else
		std::cout << "inside" << std::endl;

	std::cout << "P2 is ";
	if (!(bsp( a, b, c, p2 )))
		std::cout << "outside" << std::endl;
	else
		std::cout << "inside" << std::endl;

	return (0);
}
