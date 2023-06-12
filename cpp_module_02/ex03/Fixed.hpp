/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 22:26:05 by parrot            #+#    #+#             */
/*   Updated: 2023/06/12 22:07:37 by parrot           ###   ########.fr       */
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
	
		Fixed	&operator=( const Fixed &f );
		
		Fixed();
		Fixed( const Fixed &f );
		Fixed( const int n );
		Fixed( const float fp );
		~Fixed();
};

std::ostream	&operator<<( std::ostream &out, const Fixed &f );

#endif
