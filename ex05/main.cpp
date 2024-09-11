/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:55:25 by fmarggra          #+#    #+#             */
/*   Updated: 2024/08/28 09:55:26 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
    Harl    nag;
    
    nag.complain("debug");
    nag.complain("info");
    nag.complain("warning");
    nag.complain("error");

}
