/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombies.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:50:33 by fmarggra          #+#    #+#             */
/*   Updated: 2024/08/28 09:50:34 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIES_HPP
# define ZOMBIES_HPP

#include <iostream>

class Zombie {
    private:
        std::string _name;
    public:
        Zombie  (std::string name);
        void    announce();
        ~Zombie(void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
