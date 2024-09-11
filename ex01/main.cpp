/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:50:46 by fmarggra          #+#    #+#             */
/*   Updated: 2024/08/28 09:50:48 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    int         amt = 8;
    std::string name = "Doggo";
    Zombie*     horde;

    horde = zombieHorde(amt, name);
    if (!horde) {
        std::cout << "Doggo Horde creation unsucessful" << std::endl;
        return 1;
    }
    for (int i = 0; i < amt; i++) {
        horde[i].announce();
    }
    std::cout << "_______________________________________\n" << std::endl;
    std::cout << "Doggos finished announcements and are ready to escape" << std::endl;
    std::cout << "_______________________________________\n" << std::endl;
    delete[] horde;
    return 0;
}
