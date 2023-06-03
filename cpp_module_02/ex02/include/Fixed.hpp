/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:19:03 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/03 15:30:20 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <cstdlib>
# include <cstring>
# include <iomanip>
# include <fstream>

# define NONE		"\033[0m"
# define RED		"\033[0;31m"
# define YELLOW		"\033[0;33m"
# define MAGENTA	"\033[0;35m"
# define BLACK		"\033[0;30m"
# define VIOLET		"\033[0;35m"
# define WHITE		"\033[0;37m"
# define ORANGE		"\033[0;94m"
# define GREEN		"\033[0;32m"
# define BLUE		"\033[0;34m"
# define CYAN		"\033[0;36m"
# define BOLDGREEN	"\033[1m\033[32m"
# define BOLDBLUE	"\033[1m\033[34m"

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