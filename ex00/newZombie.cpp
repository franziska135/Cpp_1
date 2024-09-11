/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:50:11 by fmarggra          #+#    #+#             */
/*   Updated: 2024/08/28 09:50:15 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombies.hpp"

Zombie* newZombie(std::string name) {
    Zombie* newZombie = new Zombie(name);
    newZombie->announce();
    return newZombie;
}
