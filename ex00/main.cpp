/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:49:51 by fmarggra          #+#    #+#             */
/*   Updated: 2024/08/28 09:49:54 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombies.hpp"

int     main() {
    Zombie      normalZombie("Foo\t");
    Zombie*     heapZombie = newZombie("HeapZombie");

    randomChump("StackZombie");
    normalZombie.announce();
    delete heapZombie;
    return 0;
}
