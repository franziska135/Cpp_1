/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:54:00 by fmarggra          #+#    #+#             */
/*   Updated: 2024/08/28 09:54:02 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    _type = type;
}

Weapon::~Weapon(void) {
    std::cout   << _type
                << "\t: Weapon destroyed"
                << std::endl;
}

const std::string& Weapon::getType(void){
    return (_type);
}

void    Weapon::setType(std::string type) {
    _type = type;
}
