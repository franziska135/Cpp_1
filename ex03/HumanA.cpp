/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:53:15 by fmarggra          #+#    #+#             */
/*   Updated: 2024/08/28 09:53:16 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA(void) {
    std::cout   << _name
                << " is destroyed"
                << std::endl;
}

void    HumanA::attack() {
    std::cout << _name << " attacks with: " << _weapon.getType() << std::endl;
}
