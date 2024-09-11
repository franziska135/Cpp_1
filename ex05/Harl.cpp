/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:54:41 by fmarggra          #+#    #+#             */
/*   Updated: 2024/08/28 09:54:43 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug() {
    std::cout   << "[DEBUG] "
                << "I love having extra bacon for my 7XL-double-"
                << "cheese-triple-pickle-special-ketchup burger."
                << "I really do!"
                << std::endl;
}

void    Harl::info() {
    std::cout   << "[INFO] "
                << "I cannot believe adding extra bacon costs more"
                << "money. You didn’t put enough bacon in my burger!"
                << "If you did, I wouldn’t be asking for more!"
                << std::endl;
}

void    Harl::warning() {
    std::cout   << "[WARNING] "
                << "I think I deserve to have some extra bacon for"
                << "free. I’ve been coming for years whereas you"
                << "started working here since last month."
                << std::endl;
}

void    Harl::error() {
    std::cout   << "[ERROR] "
                << "This is unacceptable! I want to speak to the"
                << "manager now."
                << std::endl;
}

void    Harl::complain(std::string level) {
    void (Harl::*fctn_ptr[])(void) = {
            &Harl::debug,
            &Harl::info,
            &Harl::warning,
            &Harl::error
    };
    std::string complaint_lvl[] = {"debug", "info", "warning", "error"};
    Harl object;
    for (int i = 0; i < 4; i++) {
        if (complaint_lvl[i] == level) {
            (object.*fctn_ptr[i])();
            return ;
        }
    }
    std::cout << "Lvl not found: " << level << std::endl;
}
