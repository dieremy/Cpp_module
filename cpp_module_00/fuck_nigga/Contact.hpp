/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:50:33 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/14 16:50:34 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

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

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phone;
		std::string	_secret;

	public:
		std::string get_firstName(void);
		void set_firstName(std::string str);
		
		std::string get_lastName(void);
		void set_lastName(std::string str);
		
		std::string get_nickName(void);
		void set_nickName(std::string str);
		
		std::string get_phone(void);
		void set_phone(std::string str);
		
		std::string get_secret(void);
		void set_secret(std::string str);

		Contact();
		~Contact();

};

#endif
