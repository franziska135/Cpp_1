/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:51:14 by fmarggra          #+#    #+#             */
/*   Updated: 2024/08/28 09:51:16 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int amt, std::string name) {
    if (amt <= 0)
        return NULL;
    try{
        Zombie *horde = new Zombie[amt];
        int i;
        for (i = 0; i < amt; i++) {
            horde[i].setName(name);
        }
        std::cout << "_______________________________________\n" << std::endl;
        std::cout << i << " Doggos created, they will now announce themselves" << std::endl;
        std::cout << "_______________________________________\n" << std::endl;
        return horde;
    }
    catch (std::bad_alloc &e) {
        std::cerr << e.what() << std::endl;
        return NULL;
    }
}
