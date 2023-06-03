/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:19:03 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/03 15:53:33 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_n;
		static int const	_bits = 8;

	public:
		void	setRawBits( int const raw );
		int		getRawBits( void ) const ;
		float	toFloat( void ) const ;
		int		toInt( void ) const ;

		Fixed	&operator=( const Fixed &fixed );

		Fixed	&operator+( const Fixed &fixed );
		Fixed	&operator-( const Fixed &fixed );
		Fixed	&operator*( const Fixed &fixed );
		Fixed	&operator/( const Fixed &fixed );

		bool	operator<( const Fixed &fixed ) const ;
		bool	operator>( const Fixed &fixed ) const ;
		bool	operator<=( const Fixed &fixed ) const ;
		bool	operator>=( const Fixed &fixed ) const ;
		bool	operator!=( const Fixed &fixed ) const ;
		bool	operator==( const Fixed &fixed ) const ;

		Fixed	&operator++( void );
		Fixed	&operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );

		static Fixed		&min( Fixed &f1, Fixed &f2 );
		static const Fixed	&min( const Fixed &f1, const Fixed &f2 );
		static Fixed		&max( Fixed &f1, Fixed &f2 );
		static const Fixed	&max( const Fixed &f1, const Fixed &f2 );

		Fixed();
		Fixed( const Fixed &nFixed );
		Fixed( const int i );
		Fixed( const float f );
		~Fixed();
};

std::ostream &operator<<( std::ostream &out, const Fixed &nFixed );

#endif