/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:10:36 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/06 16:31:36 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/HumanA.hpp"
#include "include/HumanB.hpp"
#include "include/Weapon.hpp"

int main()
{
    // {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    // }
    // {
    club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    // }
    return 0;
}