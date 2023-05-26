/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:52:29 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/26 17:12:49 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <cstdlib>
# include <string>

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
# define BOLDGREEN	"\033[1m\033[32m"
# define BOLDBLUE	"\033[1m\033[34m"

class Weapon
{
    private:
        std::string _type;

    public:
        void        setType( std::string str );
        std::string getType( void ) const;

        Weapon( std::string type );
        ~Weapon();
};

#endif