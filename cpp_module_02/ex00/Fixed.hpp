/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 21:53:40 by parrot            #+#    #+#             */
/*   Updated: 2023/06/12 22:07:21 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int					_number;
		static const int	_bits = 8;

	public:
		void	setRawBits( int const raw );
		int		getRawBits( void ) const ;
		
		Fixed();			// A default constructor: used internally to initialize objects and data members when no other value is available. 
		Fixed( const Fixed &f );				// A copy constructor: used in the implementation of call-by-value parameters.
		Fixed	&operator=( const Fixed &f );	// An assignment operator: used to assign one value to another.
		~Fixed();								// A destructor: Invoked when an object is deleted.
};

#endif
