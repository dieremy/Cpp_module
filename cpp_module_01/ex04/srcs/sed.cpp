/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:30:33 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/28 18:54:16 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/sed.hpp"

int sed( std::string const &file, std::string s1, std::string s2 )
{
	// .fail will check the overall "health" of the stream, 
	// which involves things such as checking the stream
	// has currently entered a fail state
	// from trying to read an invalid value
	
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		buff;
	std::string		out;

	if (!file.length() || !s1.length() || !s2.length())
		std::cout << "empty resource" << std::endl;
	
	
	ifs.open(file);
	if (!ifs.fail())
	{
		std::cout << "file couldn't be opened." << std::endl;
		return (-1);
	}
	
	// ofs.open(file);
	// if (!ofs.fail())
	// {
	// 	std::cout << "file couldn't be opened." << std::endl;
	// 	return (0);
	// }
		
	while (std::getline(ifs, buff))
	{
		if (ifs.eof())
			break ;
		out += buff;
		out += "\n";
	}
	
	ifs.close();
	// ofs.close();

	
    std::fstream fs;
    fs.open(file + ".replace", std::fstream::in | std::fstream::out | std::fstream::app);
	if (!fs.fail())
	{
		std::cout << "file couldn't be opened." << std::endl;
		return (-1);
	}

    fs << out;
	fs.close();
	
    return (0);
}