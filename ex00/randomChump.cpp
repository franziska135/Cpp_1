/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:50:19 by fmarggra          #+#    #+#             */
/*   Updated: 2024/08/28 09:50:21 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombies.hpp"

void    randomChump(std::string name) {
    Zombie  zombie(name);
    zombie.announce();
}
