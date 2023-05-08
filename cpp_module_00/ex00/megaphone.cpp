/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:24:06 by parrot            #+#    #+#             */
/*   Updated: 2023/05/08 22:59:56 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	upper_c(char c)
{
	return (c -= 32);
}

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 0;
		while (++i < ac)
		{
			j = -1;
			while (av[i][++j])
			{
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
					std::cout << upper_c(av[i][j]);
				else
					std::cout << av[i][j];
			}
			std::cout << " ";
		}
	}
	std::cout << std::endl;
	return(0);
}
