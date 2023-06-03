/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:19:03 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/03 13:48:01 by robegarc         ###   ########.fr       */
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
		Fixed	&operator=( const Fixed &nFixed );
		void	setRawBits( int const raw );
		int		getRawBits( void ) const ;
		float	toFloat( void ) const ;
		int		toInt( void ) const ;

		Fixed();
		Fixed( const Fixed &nFixed );
		Fixed( const int i );
		Fixed( const float f );
		~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &nFixed);

#endif