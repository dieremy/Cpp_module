/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:22:00 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/28 18:49:57 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <cstdlib>
# include <cstring>
# include <iomanip>
# include <fstream>

// # include <iostream>
// # include <iomanip>
// # include <cstring>
// # include <fstream>

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

int sed( std::string file, std::string s1, std::string s2 );

#endif