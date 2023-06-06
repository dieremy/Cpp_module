/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:28:12 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/06 16:37:53 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/sed.hpp"

// .find() searches the string
// for te first occurence of the sequence
// specified by its arguments. "strnstr" alike

int	replaceStr( std::string *out, std::string s1, std::string s2 )
{
	size_t	start;

	while ((start = (*out).find(s1)) != std::string::npos)
	{
		(*out).erase(start, s1.length());
		(*out).insert(start, s2);
	}
	return (0);
}

int main(int ac, char *av[])
{
	std::string	s1;
	std::string	s2;
	std::string	buff;
	char		*fileName;
	char		str[999999];
	int			i;
	int			j;
	
    if (ac != 4)
	  	std::cout << RED << "not the right number of elements..." << NONE << std::endl;
    else
	{
		s1 = av[2];
		s2 = av[3];
		if (!s1.length() || !s2.length())
			std::cout << RED << "empty resource" << NONE << std::endl;
			
		std::ifstream	ifs(av[1]);
		if (!ifs.is_open())
		{
			std::cout << RED << "IN file couldn't be opened." << NONE << std::endl;
			return (-1);
		}
		if (strchr(av[1], '.'))
		{
			i = 0;
			j = 0;
			while (av[1][i])
			{
				if (av[1][i] == '.')
					break ;
				else
					str[j++] = av[1][i++];
			}
			str[j] = 0;
			fileName = strcat(str, ".replace");
			std::ofstream	ofs(fileName);
			if (!ofs.is_open())
			{
				std::cout << RED << "OUT file couldn't be opened." << NONE << std::endl;
				return (-1);
			}	
			while (std::getline(ifs, buff))
			{
				replaceStr(&buff, s1, s2);
				if (!ifs.eof())
					ofs << buff << std::endl;
			}
			ofs.close();
			ifs.close();
			std::cout << GREEN << "WELL DONE, BOY." << NONE << std::endl;
		}
		else
		{		
			fileName = strcat(av[1], ".replace");
			std::ofstream	ofs(fileName);
			if (!ofs.is_open())
			{
				std::cout << RED << "OUT file couldn't be opened." << NONE << std::endl;
				return (-1);
			}	
			while (std::getline(ifs, buff))
			{
				replaceStr(&buff, s1, s2);
				if (!ifs.eof())
					ofs << buff << std::endl;
			}
			ofs.close();
			ifs.close();
			std::cout << GREEN << "WELL DONE, BOY." << NONE << std::endl;
		}
	}
    return (0);
}
