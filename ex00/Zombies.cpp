/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombies.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:50:26 by fmarggra          #+#    #+#             */
/*   Updated: 2024/08/28 09:50:28 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombies.hpp"

Zombie::Zombie(std::string name) {
    _name = name;
}

Zombie::~Zombie(void) {
    std::cout   << _name
                << "\t: I'm dead"
                << std::endl;
}

void    Zombie::announce() {
    std::cout   << _name
                << "\t: BraiiiiiiinnnzzzZ..."
                << std::endl;
}
