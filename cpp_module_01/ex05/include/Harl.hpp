/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:29:33 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/29 12:32:44 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define NONE		"\033[0m"
# define RED		"\033[0;31m"
# define YELLOW		"\033[0;33m"
# define VIOLET		"\033[0;35m"
# define GREEN		"\033[0;32m"
# define CYAN		"\033[0;36m"
# define BOLDGREEN	"\033[1m\033[32m"
# define BOLDBLUE	"\033[1m\033[34m"

class Harl
{
    private:
        void	debug( void );
        void	info( void );
        void	warning( void );
        void	error( void );
		
    public:
		void complain( std::string level );
		
        Harl();
        ~Harl();
};

#endif