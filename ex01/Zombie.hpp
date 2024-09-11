/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:51:24 by fmarggra          #+#    #+#             */
/*   Updated: 2024/08/28 09:51:26 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    private:
        std::string _name;
    public:
        Zombie  (void);
        ~Zombie (void);
        void    setName(std::string name);
        void    announce();
};

Zombie* zombieHorde(int amt, std::string name);

#endif
