/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:28:12 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/28 16:48:08 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/sed.hpp"

int main(int ac, char *av[])
{
    if (ac == 4)
		sed(av[1], av[2], av[3]);
    else
		std::cout << "not the right number of elements..." << std::endl;
    return (0);
}