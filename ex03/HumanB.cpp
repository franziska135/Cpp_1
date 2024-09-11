/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:53:31 by fmarggra          #+#    #+#             */
/*   Updated: 2024/08/28 09:53:34 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    _name = name;
    _weapon = NULL;
}

HumanB::~HumanB(void) {
    std::cout   << _name
                << " is destroyed"
                << std::endl;
}

void    HumanB::attack() {
    std::cout   << _name
                << " attacks with: "
                << _weapon->getType()
                << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon) {
    _weapon = &weapon;
}
