/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 22:26:05 by parrot            #+#    #+#             */
/*   Updated: 2023/06/12 22:07:49 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_num;
		static const int	_bits = 8;
		
	public:
		void	setRawBits( int const raw );
		int		getRawBits( void ) const;
		float	toFloat( void ) const;
		int		toInt( void ) const;
	
		Fixed();
		Fixed( const Fixed &f );
		Fixed( const int n );
		Fixed( const float fp );
		Fixed	&operator=( const Fixed &f );
		~Fixed();
};

std::ostream	&operator<<( std::ostream &out, const Fixed &f );

#endif
