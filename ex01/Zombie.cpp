/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:51:00 by fmarggra          #+#    #+#             */
/*   Updated: 2024/08/28 09:51:01 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
}

void    Zombie::setName(std::string name) {
    _name = name;
}

void    Zombie::announce() {
    std::cout   << _name
                << "\t: Wooooooof..."
                << std::endl;
}

Zombie::~Zombie() {
    std::cout << _name << "\t: I escaped the leash (died)" << std::endl;
}