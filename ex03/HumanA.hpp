/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:53:22 by fmarggra          #+#    #+#             */
/*   Updated: 2024/08/28 09:53:24 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
        Weapon&     _weapon;
    public: 
        HumanA  (std::string name, Weapon& weapon);
        ~HumanA (void);
        void    attack(void);
};

#endif
